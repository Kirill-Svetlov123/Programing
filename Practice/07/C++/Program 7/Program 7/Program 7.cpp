#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    char num; double p, S, x1, x2, x3, y1, y2, y3, a, b, c; bool Pravda = true;
    cout << "Введите '1', чтобы искать площадь треугольника через стороны или '2', чтобы через координаты вершин:\n"; cin >> num;

        if (num == '1')
        {
            cout << "Введите длину сторон a, b и c\n"; cin >> a >> b >> c;
            p = (a + b + c) / 2;
            if (p > a && p > b && p > c)
            {
                S = sqrt(p * (p - a) * (p - b) * (p - c));
                cout << "Площадь равна " << S;
            }
            else cout << "Ошибка";
        }

        else if (num == '2')
        {
            cout << "Введите координаты вершин A, B и C\n"; cin >> x1 >> y1; cin >> x2 >> y2; cin >> x3 >> y3;
            cout << "A (" << x1 << "," << y1 << ")\n"; cout << "B (" << x2 << "," << y2 << ")\n"; cout << "C (" << x3 << "," << y3 << ")\n";
            S = 0.5 * abs((x1 - x3) * (y2 - y3) - (y1 - y3) * (x2 - x3));
            cout << "Площадь равна " << S;
        }

        else if (num != '1' && num != '2')
        {
            cout << "Вы ввели неправильное число";
        }
}