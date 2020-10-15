#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    long long r1, l1, r2, l2, s;
    cout << "Введите начальный и конечный элементы 1-го диапозона: ";
    cin >> l1 >> r1;
    cout << "Введите начальный и конечный элементы 2-го диапозона: ";
    cin >> l2 >> r2;
    cout << "Введите желаемую сумму: ";
    cin >> s;

    if (l1 + r2 < s)
        if (s - r2 < r1)
            l1 = s - r2;
        else
            l1 = r1;
    else
        if (s - l1 > l2)
            r2 = s - l1;
        else
            r2 = l2;

    if (l1 + r2 == s)
        cout << l1 << r2;
    else
        cout << '-1';
}