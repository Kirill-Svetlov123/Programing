#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int a, c; char oper; bool seb = true;
    cout << "Введите пример: "; cin >> a >> oper >> c;
    switch (oper)
    {
    case('+'):
        cout << "Результат вычисления: " << a + c;
        break;
    case('-'):
        cout << "Результат вычисления: " << a - c;
        break;
    case('*'):
        cout << "Результат вычисления: " << a * c;
        break;
    case('/'):
        if (c == 0)
            cout << "Делить на 0 нельзя\n";
        else
            cout << "Результат вычисления: " << a / c;
            break;
    default:
        cout << "В калькуляторе не предусмотрена данная функция";
    }
}