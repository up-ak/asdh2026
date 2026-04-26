#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<double> l;

    for (int i = 0; i < 6; i++)
    {
        double x;
        cout << "Vendosne nje nr: ";
        cin >> x;

        if (x >= 2.0 && x <= 2.9)
        {
            l.push_back(x);
        }
        else
        {
            l.push_front(x);
        }
    }

    for (auto it = l.begin(); it != l.end(); it++)
    {
        if (*it >= 2.0 && *it <= 2.9)
        {
            l.erase(it);
        }
    }

    cout << endl;
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}