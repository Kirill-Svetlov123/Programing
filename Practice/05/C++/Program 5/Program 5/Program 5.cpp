#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double S, v0, x0, t; const double a = 9.8;
    cout << "Введите значение начальной координаты(в метрах) - ";
    cin >> x0;
    cout << "Введите значение начальной скорости(в метрах в секунду) - ";
    cin >> v0;
    cout << "Введите значение времени, за которое совершается движение(в секундах) - ";
    cin >> t;
    S = (x0 + (v0 * t) - (a * t * t) / 2);
    S = S - x0;
    cout << "Объект преодолеет расстояние в " << S << " метров\n\n";
}
