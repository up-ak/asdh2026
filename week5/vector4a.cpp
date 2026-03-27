#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    while (true)
    {
        cout << "Vendose nje numer (-1 per tu ndalur): ";

        int n;
        cin >> n;

        if (n == -1)
        {
            break;
        }

        v.push_back(n);
    }

    int min = v.at(0);

    for (int i = 1; i < v.size(); i++)
    {
        if (v.at(i) < min)
        {
            min = v.at(i);
        }
    }

    cout << "Min: " << min << endl;

    return 0;
}