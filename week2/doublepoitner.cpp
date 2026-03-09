#include <iostream>
using namespace std;

int main()
{
    float a = 5;
    float *ptr_a = &a;

    float **ptr2 = &ptr_a;

    cout << "Vlera e a permes ptr_a: " << *ptr_a << endl;
    cout << "Vlera e a permes ptr2: " << **ptr2 << endl;

    **ptr2 = 11;

    cout << "Vlera a: " << a << endl;
    cout << "Vlera e a permes ptr_a: " << *ptr_a << endl;
    cout << "Vlera e a permes ptr2: " << **ptr2 << endl;

    return 0;
}