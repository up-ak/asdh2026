#include <iostream>
using namespace std;

int main()
{
    double a = 43;
    int b;
    b = 3;

    cout << "Adresa e a eshte: " << &a << endl;

    double *pointer_a = &a;

    *pointer_a = 10; // ->>> a = 10;

    cout << "Vlera e a: " << a << endl;
    cout << "Vlera e a permes pointeri: " << *pointer_a << endl;

    double **ptr2 = &pointer_a;

    **ptr2 = 11; //->> *pointer_a = 10 ->>> a = 10;

    cout << "Vlera e a: " << a << endl;
    cout << "Vlera e a permes ptr2: " << *pointer_a << endl;

    return 0;
}