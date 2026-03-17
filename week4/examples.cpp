#include <iostream>
#include <chrono>
using namespace std;

// 1 + 1 => 2 => O(1) => kohor
// 0 => O(1) => hapsinor
void example0(int A[])
{
    cout << A[0];
    cout << A[1];

    int a = 10;
}

// 1 + 1 + 1 + b(1+1+1) + 1
// 4 + 3b => 3b => b => O(b)
// 2 => O(1) => hapsinor
int example1(int a, int b)
{
    int res = 1;

    if (b == 4)
    { // rasti me i mir anashkalohet nga Big O
        return b;
    }

    for (int i = 0; i < b; i++)
    {
        res *= a;
    }

    return res;
}

// 1 + 1 + n(1 + 1 + 1 + 4m) => 2 + 3n + 4nm
// n + nm => nm => n^2 || m^2 => O(n^2)
int example3(int n, int m)
{
    int x = 0;

    for (int i = 0; i < n; i++)
    {

        // 1 + 4m
        for (int j = 0; j < m; j++)
        {
            x += 1;
            x += 1;
        }
    }

    return x;
}

// 1 + 1 + (n-1)(1+1+1+6n)
// 2 + (n-1)(3+6n) => 2 + 3n +6n^2 - 3 - 6n = -1 - 3n  + 6n^2 => O(n^2)
//
int *sort(int A[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        // 1 + 6n
        for (j = 0; j < n; j++)
        {
            // 4
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    return A;
}

// text.length()=n =>  O(n)
bool contains(string text, char c)
{
    for (int j = 0; j < text.length(); j++)
    {
        if (text[j] == c)
        {
            return true;
        }
    }

    return false;
}

// O(n)
void sayHello(int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << "Hello";
    }
}

// O(n) => kohor
// n + 1 => O(n) => hapsinor
string *getHellos(int n)
{
    string *arr = new string[n];

    for (int j = 0; j < n; j++)
    {
        arr[j] = "hello";
    }

    return arr;
}

int main()
{
    system("pause");
    return 0;
}