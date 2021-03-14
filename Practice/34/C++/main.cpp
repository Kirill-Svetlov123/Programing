#include <iostream>

using namespace std;

void print(int *mass, int length){
    cout << "[";
    for (int i = 0; i < length; i++){
        cout << mass[i];
        if (i < length-1) {
            cout << ", ";
        } else {
            cout << "]";
        }
    }
}

void sort(int *mass, int length){
    for (int i = 1; i < length; i++){
        int x = mass[i];
        int j = i;
        while(j > 0 && mass[j-1] > x){
            mass[j] = mass[j-1];
            j = j-1;
        }
        mass[j] = x;
    }
}

void create(int **mass, int length, int first_num = 0, int step = 0){
    *mass = new int[length];
    *mass[0] = first_num;
    for (int i = 1; i < length; i++){
        *mass[i] = *mass[i-1] + step;
    }
}

void destroy(int **mass){
    if(*mass != nullptr){
        delete[] *mass;
        *mass = nullptr;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int length, first_num, step;
    cout << "Enter the length - "; cin >> length;
    cout << "Enter the value of the first element - "; cin >> first_num;
    cout << "Enter step - "; cin >> step;
    int* mass = nullptr;
    create(&mass, length, first_num, step);
    sort(mass, length);
    print(mass, length);
    destroy(&mass);
}


