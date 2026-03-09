#include <iostream>
using namespace std;

int main()
{
    int numri = 5;

    cout << "Vlera e numrit: " << numri << endl;
    cout << "Adresa e numrit: " << &numri << endl;

    int *ptr_numri = &numri;

    cout << "Vlera e ptr_numri: " << ptr_numri << endl;
    cout << "Adresa e ptr_numri: " << &ptr_numri << endl;
    cout << "Vlera ku pointin ptr_numri: " << *ptr_numri << endl;

    return 0;
}