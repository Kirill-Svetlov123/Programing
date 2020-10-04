#include <iostream>
#include <ctime>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(0));
    int q, k = 1, i, a, n = rand() % 100; bool aha = false;
    while (aha == false)
    {
        for (i = 1; i < 6; i++)
        {
            cout << "Попытка №" << k << "\nВведите число n: "; cin >> a;
            if (a < n) cout << "Загаданное число больше\n\n";
            else if (a > n) cout << "Загаданное число меньше\n\n";
            else if (a = n)
            {
                cout << "Поздравляю! Вы угадали";
                aha = true;
            }
            k++;
        }
        if (aha == true) { cout << "Хотите начать сначала? (1 - ДА)"; cin >> q; }
        else cout << "Вы проиграли. Было загадано: " << n << "\nХотите начать сначала? (1 - ДА): "; cin >> q;
        if (q == 1) break;
    }
}