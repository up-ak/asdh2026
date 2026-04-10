#include <iostream>
#include <vector>
using namespace std;

// Introspection
// 5, 7, -10, 34, 7, 3, 1, 5345, 34
// -100, -60, -40, 30, 50, 80, 100, 1000

bool linearSearch(vector<int> vec, int x)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec.at(i) == x)
        {
            return true;
        }
    }
    return false;
}

bool binarySearch(vector<int> vec, int x)
{
    int mid = vec.size() / 2;

    if (vec.empty())
    {
        return false;
    }

    if (x == vec.at(mid))
    {
        return true;
    }

    if (x > vec.at(mid))
    {
        // kerko ne pjesen e dyte
        vector<int> p2;

        for (int i = mid + 1; i < vec.size(); i++)
        {
            p2.push_back(vec.at(i));
        }

        return binarySearch(p2, x);
    }
    else
    {
        // kerko ne pjesen e pare
        vector<int> p1;

        for (int i = 0; i < mid; i++)
        {
            p1.push_back(vec.at(i));
        }

        return binarySearch(p1, x);
    }
}

int main()
{
    vector<int> v = {-100, -60, -40, 30, 50, 80, 100, 1000};
    bool exists = binarySearch(v, 20);

    return 0;
}