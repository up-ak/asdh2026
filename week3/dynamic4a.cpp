#include <iostream>
using namespace std;

int main()
{
    int *ptr_1 = nullptr;
    int *ptr_2 = new int;

    cout << "Vlera ku pointon ptr_2: " << *ptr_2 << endl;

    int array[4] = {1, 2, 3, 4};

    cout << "Vlera e array[0]: " << *(array + 0) << endl;
    cout << "Vlera e array[1]: " << *(array + 1) << endl;
    cout << "Vlera e array[2]: " << *(array + 2) << endl;
    cout << "Vlera e array[3]: " << *(array + 3) << endl;

    int n = 4;

    cout << "Vendos numrin e anterave: ";
    cin >> n;

    int *array2 = new int[n];

    cin >> n;

    // cakto vleren e antarit te pare
    array2[0] = 10;
    *(array2 + 0) = 10; // *array2 = 10;

    for (int i = 0; i < n; i++)
    {
        cout << "Antari " << i + 1 << " " << *(array2 + i) << " ";
        // cout << "Antari " << i + 1 << " " << array2[i] << " ";
    }

    delete[] array2;

    return 0;
}