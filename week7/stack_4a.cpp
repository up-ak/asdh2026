#include <iostream>
#include <stack>
using namespace std;

stack<int> krijoStack(int a, int b, int c)
{
    stack<int> stk;

    while (stk.size() < a)
    {
        int x;
        cout << "Vendose nje nr: ";
        cin >> x;

        if (x > b && x < c)
        {
            stk.push(x);
        }
    }

    return stk;
}

int stackEdges(stack<int> s, int &top)
{
    top = s.top();

    while (s.size() > 1)
    {
        s.pop();
    }

    return s.top();
}

int main()
{
    stack<int> s = krijoStack(10, 100, 1000);

    cout << s.top();
    s.pop();
    cout << s.top();

    int top;
    int bottom = stackEdges(s, top);

    return 0;
}