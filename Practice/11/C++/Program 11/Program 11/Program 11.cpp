#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int b, i; double a, k = 1.0;
    cout << "Введите число: "; cin >> a;
    cout << "Введите степень: "; cin >> b;
    if (b > 0)
    {
     
        for (i = 0; i < b; i++)
        {
            k *= a;
        }
        cout << "Ответ: " << k;
    }

    else if (b == 0) {
        a = 1; cout << "Ответ: " << a;
    }

    else if (b < 0)
    {

        for (i = b; i < 0; i++)
        {
            k *= (1/a);
        }
        cout << "Ответ: " << k;
    }
}