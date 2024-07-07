#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << list1.back() << endl;
    cout << list1.front() << endl;

    cout << *next(list1.begin(), 3) << endl;
    return 0;
}