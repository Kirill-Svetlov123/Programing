#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n, i; bool a = false;
    cout << "Введите число: "; cin >> n;
    if (n > 1)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0) a = true;
        }
        if (a == false)
        {
            cout << "Число простое";
        }
        else cout << "Число сложное";
    }
    else cout << "Введено неправильное число";
}