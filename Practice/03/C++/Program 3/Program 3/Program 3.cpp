#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, e, h; double c, d, f, g;

    cout << "Введите две переменные типа int\n" << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Сложение - " << r + b << "\nВычитание - " << r - b << "\nУмножение - " << r * b << "\nДеление - " << r / b;

    cout << "\n\nВведите две переменные типа double\n" << "c = ";
    cin >> c;
    cout << "d = ";
    cin >> d;
    cout << "Сложение - " << c + d << "\nВычитание - " << c - d << "\nУмножение - " << c * d << "\nДеление - " << c / d;

    cout << "\n\nВведите две переменные, первая типа int, вторая типа double\n" << "e = ";
    cin >> e;
    cout << "f = ";
    cin >> f;
    cout << "Сложение - " << e + f << "\nВычитание - " << e - f << "\nУмножение - " << e * f << "\nДеление - " << e / f;

    cout << "\n\nВведите две переменные, первая типа double, вторая типа int\n" << "g = ";
    cin >> g;
    cout << "h = ";
    cin >> h;
    cout << "Сложение - " << g + h << "\nВычитание - " << g - h << "\nУмножение - " << g * h << "\nДеление - " << g / h;
}