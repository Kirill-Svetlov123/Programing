#include <iostream>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#define _USE_MATH_DEFINES
#include <Math.h>

using namespace std;
int main()
{
    int n; double x; int limit = 10;
    cout << 'n' << "\t" << "n!" << endl;
    for (n = 1; n < 11; n++)
    {
        cout << n << "\t" << Task1(n) << endl;
    }

    cout << endl << 'n' << "\t" << "sin(x)" << endl;

    for (x = 0; x <= M_PI / 4; x += M_PI / 180)
    {
        cout << x << "\t" << Task2(x) << endl;
    }

    cout << endl << 'k' << "\t" << "C(k, 10)" << endl;

    for (int i = 1; i <= limit; i++)
        cout << i << "\t" << Task3(i, limit) << endl;
}