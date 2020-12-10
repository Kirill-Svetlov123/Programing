#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> replacement(vector <int> top, int rep) {
    int max = 0;
    for (int i = 0; i < top.size(); i++) {
        if (top[i] > max) {
            max = top[i];
        }
    }
    for (int i = 0; i < top.size(); i++) {
        if (top[i] == max && max > rep) {
            top[i] = rep;
            break;
        }
    }
    return top;
}

void sortirovka(vector <int> top) {
    sort(top.begin(), top.end());
    for (int i = (top.size() - 1); i >= 0; i--) {
        cout << top[i] << " ";
    }
    cout << endl;
}


int main()
{
    setlocale(LC_ALL, "rus");
    int n, a;
    cout << "Введите количество чисел n: ";
    cin >> n;
    vector <int> Vec;
    Vec.resize(n);
    vector <int> top;
    top.resize(0);

    cout << "Введите n чисел: ";
    for (int i = 0; i < Vec.size(); i++) {
        cin >> Vec[i];
    }

    for (int i = 0; i < Vec.size(); i++) {
        if (top.size() == 5) {
            top = replacement(top, Vec[i]);
        }
        else {
            top.push_back(Vec[i]);
        }
        sortirovka(top);
    }
}