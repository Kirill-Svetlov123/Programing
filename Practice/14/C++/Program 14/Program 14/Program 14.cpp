#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    long long n; int d, i, k = 0, l = 2;
    cout << "Введите число n: "; cin >> n;
    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            if ((d = pow(l, i)) <= n)
            {
                k++;
            }
        }
        cout << "Количество степепней двойки перед n = " << k;
    }
    else cout << "Введено неправильное число";
}