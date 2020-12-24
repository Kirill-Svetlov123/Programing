#include <iostream>
#include <fstream>
#include <iomanip>
#include <cpp_httplib/httplib.h>
#include <nlohmann/json.hpp>

using namespace httplib;
using namespace std;

using nlohmann::json;

string weather_js;

string get_info(const char* host, const char* api) {
    Client cli(host);
    auto res = cli.Get(api);
    if (res) {
        if (res->status == 200) {
            cout << res->body << endl;
            return res->body;
        }
        else {
            cout << "Status code: " << res->status << endl;
        }
    }
    else {
        auto err = res.error();
        cout << "Error code: " << err << endl;
    }
}

int get_untime() {
    string untime;
    untime = get_info("http://worldtimeapi.org", "/api/timezone/Europe/Simferopol");
    if (untime != "") {
        json j = json::parse(untime);
        return j["unixtime"];
    }
    return 0;
}

string get_weather_data() {
    string weather_data;
    weather_data = get_info("http://api.openweathermap.org", "/data/2.5/onecall?lang=ru&units=metric&exclude=current,minutely,daily,alerts&lat=44.952116&lon=34.102411&appid=01daea410dddfb7139d43e08499eecd4");
    return weather_data;
}

int get_weather_id(int untime) {
    if (weather_js != "") {
        json j = json::parse(weather_js);
        for (int i = 0; i < j["hourly"].size(); i++) {
            if (j["hourly"][i]["dt"] > untime) {
                return i;
            }
        }
    }
    return -1;
}

int refresh_id() {
    int untime = get_untime();
    int id = get_weather_id(untime);
    if (id < 0) {
        weather_js = get_weather_data();
        id = get_weather_id(untime);
    }
    return id;
}

double get_temp(int id) {
    json j = json::parse(weather_js);
    return j["hourly"][id]["temp"];
}

string get_description(int id) {
    json j = json::parse(weather_js);
    return j["hourly"][id]["weather"][0]["description"];
}

string get_icon(int id) {
    json j = json::parse(weather_js);
    return j["hourly"][id]["weather"][0]["icon"];
}

bool get_weather_data(double& temp, string& description, string& icon) {
    try {
        int id = refresh_id();

        if (weather_js != "") {

            temp = get_temp(id);
            description = get_description(id);
            icon = get_icon(id);
        }

    }
    catch (...) {
        return false;
    }
    return true;
}

string replacement(string str, string origin, string new_info) {
    SIZE_T strbegin = str.find(origin);
    return str.replace(strbegin, origin.length(), new_info);
}

string create_widget(int temp, string description, string icon) {
    ifstream file("widget.html");
    string str;
    getline(file, str, '\0');

    str = replacement(str, "{hourly[i].temp}", std::to_string(temp));
    str = replacement(str, "{hourly[i].temp}", std::to_string(temp));
    str = replacement(str, "{hourly[i].weather[0].description}", description);
    str = replacement(str, "{hourly[i].weather[0].icon}", icon);

    return str;
}


string create_raw(int temp, string description) {
    std::stringstream ss;
    json j;
    j["temp"] = temp;
    j["description"] = description;
    ss << std::setw(2) << j << std::endl;
    return ss.str();
}

void main_response(const Request& req, Response& res) {
    double temp = 0;
    string description = "", icon = "";
    if (get_weather_data(temp, description, icon)) 
        res.set_content(create_widget(round(temp), description, icon), "text/html");
    else
        res.set_content("Service is unavailable", "text/html");
}

void raw_response(const Request& req, Response& res) {
    double temp = 0;
    string description = "", icon = "";
    if (get_weather_data(temp, description, icon))
        res.set_content(create_raw(round(temp), description), "text/plain; charset=UTF-8");
    else
        res.set_content("Service is unavailable", "text/html");
}

int main()
{
    setlocale(LC_ALL, "rus");
    Server svr;
    std::cout << "Start server... OK\n";
    svr.Get("/", main_response);
    svr.Get("/raw", raw_response);
    svr.listen("localhost", 3000);
}