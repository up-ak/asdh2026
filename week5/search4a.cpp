#include <iostream>
#include <vector>
using namespace std;

// O(n)
bool linearSearch(vector<int> vargu, int x)
{
    for (int i = 0; i < vargu.size(); i++)
    {
        if (vargu.at(i) == x)
        {
            return true;
        }
    }

    return false;
}

// O(logn)
bool binarySearch(vector<int> vargu, int x)
{
    int mid = vargu.size() / 2;

    if (vargu.size() == 0)
    {
        return false;
    }

    if (vargu.at(mid) == x)
    {
        return true;
    }

    if (x < vargu.at(mid))
    {
        // pjesa e pare
        vector<int> p1;
        for (int i = 0; i < mid; i++)
        {
            p1.push_back(vargu.at(i));
        }

        return binarySearch(p1, x);
    }
    else
    {
        // pjesa e dyte
        vector<int> p2;
        for (int i = mid + 1; i < vargu.size(); i++)
        {
            p2.push_back(vargu.at(i));
        }

        return binarySearch(p2, x);
    }
}

int main()
{
    vector<int> vargu = {-100, 4, 6, 8, 9, 10, 23, 500, 12143, 435353};

    // shiko a eshte numri 7 pjese e vektorit.

    bool exists = binarySearch(vargu, 7);

    return 0;
}
