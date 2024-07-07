#include <bits/stdc++.h>
using namespace std;

/* class Pair  /// Type-1
{
public:
    int first, second;
}; */

/* class Pair   /// Type-2
{
public:
    int first, second;
    void make_pair(int first, int second)
    {
        this->first = first;
        this->second = second;
    }
}; */

class Pair
{
public:
    int first, second;
    void make_pair(int a, int b)
    {
        first = a;
        second = b;
    }
};

int main()
{
    Pair p;

    /* p.first = 10;  /// Type-1
    p.second = 20; */

    /* p.make_pair(10, 20); */ /// Type-2

    p.make_pair(10, 20);

    cout << p.first << " " << p.second << endl;
    return 0;
}