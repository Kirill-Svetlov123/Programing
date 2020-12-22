#include <iostream>
#include <vector>
#include <string>

using namespace std;

string Info[60] = { "Petrov I", "5", "2", "4", "5", "3", "Ivanov K", "9", "5", "3", "4", "4", "Katrov P", "2", "4", "3", "5", "2", "Polkanova M", "7", "4", "5", "4", "5", "Alekseev N", "1", "3", "2", "3", "4", "Pavlova P", "8", "3", "4", "5", "3", "Tarakanov A", "5", "4", "5", "5", "3", "Fedorenko T", "6", "5", "5", "5", "2", "Pradedov K", "3", "3", "3", "5", "5", "Varkov E", "1", "4", "5", "3", "4"};

string columns = "Name\t\t\tGroup\t\tMath\t\tPhys\t\tHist\t\tProg";

struct Student {
    string name;
    int group;
    int exams[4];
};

vector <Student> list_formation(vector <Student> Stud) {
    for (int i = 0; i < 10; i++) {
        Stud = input_struct(i, Stud);
    }
    return Stud;
}

vector <Student> input_struct(int i, vector <Student> Stud) {
    Stud[i].name = Info[6*i];
    Stud[i].group = atoi(Info[6*i+1].c_str()); 
    for (int j = 0; j < 4; j++) {
        Stud[i].exams[j] = atoi(Info[6*i+2+j].c_str());
    }
    return Stud;
}

ostream& operator<<(ostream& os, Student& student) {
    os << "\n\n" << Stud[i].name << "\t\t" << Stud[i].group << "\t\t";
    for (int j = 0; j < 4; j++) {
        os << Stud[i].exams[j] << "\t\t";
    }
    return os;
}

int main()
{
    vector <Student> Stud;
    Stud.resize(10);

    Stud = list_formation(Stud);

    cout << columns;
    for (int i = 0; i < 10; i++) {
        cout << Stud;
    }
}