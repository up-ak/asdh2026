#include <iostream>
#include <queue>
using namespace std;

void f1(priority_queue<double> &pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}

int main()
{
    priority_queue<double> pq;

    while (pq.size() < 7)
    {
        double x;
        cout << "Vendose nje numer: ";
        cin >> x;

        pq.push(x);
    }

    f1(pq);
    f1(pq);

    return 0;
}