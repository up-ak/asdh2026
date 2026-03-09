#include <iostream>
using namespace std;

void faktorieli(int n, int *rez)
{
    int f = 1;
    for (int i = n; i > 0; i--)
    {
        f *= i;
    }

    *rez = f;
}

int main()
{
    int *ptr = new int;

    faktorieli(5, ptr); // n = 5, rez = ptr;

    cout << *ptr
         << endl;

    int size = 10;

    int *array = new int[size];

    // ndrysho antarin e pare
    *array = 5;

    for (int i = 0; i < 10; i++)
    {
        // array[i] = i + 8;
        *(array + i) = i + 8;
    }

    delete[] array;

    return 0;
}