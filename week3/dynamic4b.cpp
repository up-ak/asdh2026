#include <iostream>
using namespace std;

void test()
{
    int *ptr_1 = nullptr;

    ptr_1 = new int;

    delete ptr_1;
}

int main()
{
    int *ptr_1 = nullptr;

    ptr_1 = new int;

    *ptr_1 = 10;

    cout << "Vlera ku pointon ptr_1: " << *ptr_1 << endl;

    delete ptr_1;

    int n;

    cout << "Vendos madhesin: ";
    cin >> n;

    int array[4] = {1, 2, 3, 4};

    cout << "Vargu eshte: " << array << endl;
    cout << "Adresa e antarit te pare: " << &array[0] << endl;

    cout << "Antari i pare: " << array[0] << endl;
    cout << "Antari i pare: " << *(array + 0) << endl;

    cout << "Antari i dyte: " << array[1] << endl;
    cout << "Antari i dyte: " << *(array + 1) << endl;

    cout << "Antari i tre: " << array[2] << endl;
    cout << "Antari i tre: " << *(array + 2) << endl;

    int *array2 = new int[n];

    array2[0] = 10;
    *(array2 + 0) = 10;
    *(array2) = 10;

    for (int i = 0; i < n; i++)
    {
        cout << array2[i] << endl;
        cout << *(array2 + i) << endl;
    }

    delete[] array2;

    return 0;
}