#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> mylist;    // initialize type --> 1
    // list<int> mylist(5); // initialize type--> 2

    // list<int> mylist(5, 5); // Type-->3
    // for (auto i = mylist.begin(); i != mylist.end(); i++)
    // {
    //     cout << *i << " ";
    // }
    // for (int v : mylist)
    // {
    //     cout << v << " ";
    // }

    // int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Type-->4
    // list<int> l2(a, a + 10);

    // vector<int> v = {10, 20, 30, 40};
    // list<int> l2(v.begin(), v.end());

    list<int> l1 = {1, 2, 3, 4, 5};
    list<int> l2(l1);
    for (int i : l2)
    {
        cout << i << " ";
    }

    return 0;
}