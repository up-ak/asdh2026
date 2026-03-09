#include <iostream>
using namespace std;

int shuma(int *a, int v2)
{
    *a = 1000000;
    int c = 5;

    return *a + v2 + c;
}

int main()
{
    int a = 10;
    int b = 11;
    double c = 12;

    int *pointerA = &a;

    shuma(&a, b);

    cout << "Adresa e variables a: " << &a << endl;
    cout << "Adresa e variables b: " << &b << endl;
    cout << "Adresa e variables c: " << &c << endl;

    cout
        << "Fundi" << endl;

    return 0;
}