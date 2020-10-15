#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int i, n, k = 1;
    cout << "Введите число n, для которого будет рассчитываться факториал: "; cin >> n;
    if (n <= 1) cout << "Введено неправильное число";
    else
    {
        k = n;
        for (i = 1; i < n; i++)
        {
            k = k * i;
        }
    }
    cout << "Ответ: " << k;
}