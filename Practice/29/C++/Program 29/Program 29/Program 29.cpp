#include <iostream>
#include <vector>

using namespace std;

struct Student {
    string name;
    int group;
    vector <int> exams;
};

int search_the_longest(vector <Student> Losers) {
    int max = -1;
    for (int i = 0; i < Losers.size(); i++) {
        if (atoi(Losers[i].name.c_str()) > max) {
            max = atoi(Losers[i].name.c_str());
        }
    }
    return max;
}

ostream& operator<<(ostream& os, Student& student) {
    
}

int main()
{
    vector <Student> Stud = {
        { "Petrov I", 5, {2, 4, 5, 3} },
        { "Ivanov K", 9, {5, 3, 4, 4} },
        { "Katrov P", 2, {4, 3, 5, 2} },
        { "Polkanova M", 7, {4, 5, 4, 5} },
        { "Alekseev N", 1, {3, 2, 3, 4} },
        { "Pavlova P", 8, {3, 4, 5, 3} },
        { "Tarakanov A", 5, {4, 5, 5, 3} },
        { "Fedorenko T", 6, {5, 5, 5, 2} },
        { "Pradedov K", 3, {3, 3, 5, 5} },
        { "Varkov E", 1, {4, 5, 3, 4} } };

    vector<Student> Losers;
    for (int i = 0; i < Stud.size(); i++) {
        if ((Stud[i].exams[0] == 2) || (Stud[i].exams[1] == 2) || (Stud[i].exams[2] == 2) || (Stud[i].exams[3] == 2)) {
            Losers.push_back(Stud[i]);
        }
    }
    
    int the_longest = search_the_longest(Losers);
}
