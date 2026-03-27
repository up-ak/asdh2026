#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 11> arr = {1, 3, 4, 5, 6, 7, 8, 9, 2, 4};

    double s = 0;

    if (arr.empty() == true)
    {
        cout << "Vargu eshte i zbrazet";
    }

    for (int i = 0; i < arr.size(); i++)
    {
        // s += arr[i];
        s += arr.at(i);
    }

    double m = s / arr.size();
    int nrMbiMesatare = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr.at(i) > m)
        {
            nrMbiMesatare++;
        }
    }

    cout << "Mesatarja: " << m << endl;
    cout << "Mbi mesatare: " << nrMbiMesatare << endl;

    return 0;
}