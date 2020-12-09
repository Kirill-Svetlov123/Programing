#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

vector <vector <int>> inputMatrix(vector <int> Vec) {
    vector <int> strVec;
    vector <vector <int>> Matr;
    for (int i = 0; i < Vec.size(); i++) {
        strVec.push_back(Vec[i]);
        if ((i + 1) % (int)(sqrt(Vec.size())) == 0) {
            Matr.push_back(strVec);
            strVec.resize(0);
        }
    }
    return Matr;
}

void inputVec(vector <int>& Vec, int n) {
    Vec.resize(0);
    for (int i = 0; i < n; i++) {
        int elem;
        cin >> elem;
        Vec.push_back(elem);
    }
}

void print(vector <int> Vec) {
    for (int i = 0; i < Vec.size(); i++) {
        cout << Vec[i] << " ";
    }
    cout << endl;
}

bool sort(vector <int> Vec, bool order) {
    if (Vec.size() == 1)
        return true;
    for (int i = 1; i < Vec.size(); i++) {
        if (order == true) {
            if (Vec[i] < Vec[i - 1])
                return false;
        } else {
            if (Vec[i] > Vec[i - 1])
                return false;
            }
    }
    return true;
}

vector <int> BozoSort(vector <int> Vec, bool order) {
    srand(time(NULL));
    while (!sort(Vec, order)) {
        int rand_numb1 = rand() % Vec.size();
        int rand_numb2 = rand() % Vec.size();
        swap(Vec[rand_numb1], Vec[rand_numb2]);
    }
    return Vec;
}

vector <int> BozoSort(vector <vector <int>> matrix, bool order) {
    vector <int> Mat;
    for (int i = 0; i < matrix.size(); i++) {
        matrix[i] = BozoSort(matrix[i], order);
        for (int j = 0; j < matrix[i].size(); j++) {
            Mat.push_back(matrix[i][j]);
        }
    }
    return Mat;
}

vector <int> BozoSort(int a, int b, int c, bool order) {
    vector <int> Vec{a, b, c};
    return BozoSort(Vec, order);
}

int main()
{
    int n;
    vector <int> Vec;
    cin >> n;
    vector <vector <int>> matrix;
    inputVec(Vec, n);
    matrix = inputMatrix(Vec);

    print(BozoSort(Vec, true));
    print(BozoSort(Vec, false));

    print(BozoSort(matrix, true));
    print(BozoSort(matrix, false));

    print(BozoSort(Vec[0], Vec[1], Vec[2], true));
    print(BozoSort(Vec[0], Vec[1], Vec[2], false));
}