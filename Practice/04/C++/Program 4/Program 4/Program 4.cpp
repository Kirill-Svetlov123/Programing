#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int q, p, third;
    cout << "Введите значение а\n" << "a = ";
    cin >> q;
    cout << "Введите значение b\n" << "b = ";
    cin >> p;
    third = q;
    q = p;
    p = third;
    cout << "\na = " << q << "\n" << "b = " << p;
    swap(q, p);
    cout << "\n\na = " << q << "\n" << "b = " << p;
}
