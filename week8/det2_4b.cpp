#include <iostream>
#include <list>
using namespace std;

void print(list<int> l)
{
    cout << endl;
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
}

void modifiko(list<int> &l, char o)
{
    if (o == 'B')
    {
        l.pop_back();
    }
    else if (o == 'F')
    {
        l.pop_front();
    }
    else if (o == 'R')
    {
        l.reverse();
    }
}

int main()
{
    list<int> l;
    int n;
    cout << "Sa numra deshironi te vendosni";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Vendos x: ";
        cin >> x;

        l.push_back(x);
    }

    modifiko(l, 'R');

    print(l);

    return 0;
}