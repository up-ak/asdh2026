#include <iostream>
using namespace std;

void faktorieli(int n, int *res)
{
    int f = 1;
    for (int i = n; i > 0; i--)
    {
        f *= i;
    }

    *res = f;

    int *testp = new int;
}

int main()
{
    int *result = new int;

    faktorieli(5, result);

    cout << "Result: " << *result << endl;

    return 0;
}