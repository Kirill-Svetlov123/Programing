#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>
#include <iomanip>
#include <vector>

struct Person
{
    int userId;
    bool task_completed;
};

typedef std::vector<Person> _persons;

int main()
{
    _persons persons;
    Person person;
    std::ifstream is("in.json");
    nlohmann::json j = nlohmann::json::parse(is);
    
    for (int i = 0; j.size(); i++)
    {
        int usid = j[i]["userId"];
        bool comp = j[i]["completed"];
        if (comp)
        {
            for (int i = 0; i < persons.size(); i++)
            {
                if (persons[i].userId == usid)
                {
                    persons[i].task_completed++;
                }
            }
        }
        person.task_completed = 1;
        person.userId = usid;
        persons.push_back(person);
    }

    nlohmann::json j = nlohmann::json::array();
    for (int i = 0; i < persons.size(); i++)
    {
        nlohmann::json uj;
        uj["userId"] = persons[i].userId;
        uj["task_completed"] = persons[i].task_completed;
        j.push_back(uj);
    }

    std::ofstream os("out.json");
    os << std::setw(2) << j << std::endl;
}