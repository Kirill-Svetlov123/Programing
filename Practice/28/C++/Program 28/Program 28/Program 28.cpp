#include <iostream>
#include <vector>


using namespace std;

int verification(int f, int i) {
    if (f % i != 0 && f != 1) {
        while (f % i != 0) {
            i++;
        }
    }
    return i;
}

int funct(int n, int i, bool order) {
    int k = 0;
    while (n % i == 0) {
        k++;
        n = n / i;
    }
    if (order == true) {
        return n;
    }
    else {
        if (k < 2) {
            return 0;
        }
        else {
            return k;
        }
    }
}

void print_factorization(int n) {
    vector <int> power;
    power.resize(0);
    vector <int> factor;
    factor.resize(0);
    int f = n;
    int i = 2;
    i = verification(f, i);
    while (f % i == 0) {
        power.push_back(funct(f, i, false));
        f = funct(f, i, true);
        factor.push_back(i);
        i++;
        i = verification(f, i);
    }
    
    for (int r = 0; r < factor.size(); r++) {
        if (r != 0) {
            cout << "*" << factor[r];
        }
        else {
            cout << factor[r];
        }
        if (power[r] > 0) {
            cout << "^" << power[r];
        }
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите число n: ";
    cin >> n;

    print_factorization(n);
}