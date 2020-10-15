#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double d, a, b, c, x1, x2; bool sania = false;

    cout << "Введите значения a, b, c:\n";
    cin >> a >> b >> c;

    do
    {
        if (a == 0)
        {
            if (b == 0 && c == 0) cout << "Корнем является любое число";
            else if (b == 0) cout << "Нет корней";
            else if (c == 0) cout << "Корень: " << abs(-c / b);
            else cout << "Корень: " << (-c / b);
            sania = true;
        }

        if (sania == true) break;
        d = b * b - 4 * a * c;
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        if (d > 0)
        {
            cout << "Корни: " << x1 << x2;
            sania = true;
        }
        if (sania == true) break;
        else if (d == 0)
        {
            cout << "Корень: " << x1;
            sania = true;
        }
        if (sania == true) break;
        else if (d < 0)
        {
            cout << "Нет корней";
            sania = true;
        }
        if (sania == true) break;
    } while (sania == false);
}
