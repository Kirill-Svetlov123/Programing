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
    bool flag = false;
    _persons persons;
    Person person;
    std::ifstream is("in.json");
    nlohmann::json j = nlohmann::json::parse(is);
    
    for (int i = 0; i < j.size(); i++)
    {
        int usid = j[i]["userId"];
        bool comp = j[i]["completed"];
        if (comp)
        {
            for (int k = 0; k < persons.size(); i++)
            {
                if (persons[k].userId == usid)
                {
                    flag = true;
                    persons[k].task_completed++;
                    break;
                }
            }
        }

        if (!flag)
        {
            person.task_completed = 1;
            person.userId = usid;
            persons.push_back(person);
        }
    }

    nlohmann::json j1 = nlohmann::json::array();
    for (int i = 0; i < persons.size(); i++)
    {
        nlohmann::json uj;
        uj["userId"] = persons[i].userId;
        uj["task_completed"] = persons[i].task_completed;
        j1.push_back(uj);
    }

    std::ofstream os("out.json");
    os << std::setw(2) << j1 << std::endl;
}