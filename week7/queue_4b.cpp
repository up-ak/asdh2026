#include <iostream>
#include <queue>
using namespace std;

void f1(queue<int> q, int &rezultati)
{
    rezultati = q.back();
}

int main()
{
    queue<int> q;

    q.push(5);
    q.push(2);
    q.push(55);
    q.push(88);

    int iFundit;

    f1(q, iFundit);

    cout << "I fundit " << iFundit << endl;

    return 0;
}