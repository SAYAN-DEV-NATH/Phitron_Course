#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> list1 = {1, 2, 3, 4, 5}; // Type 1;

    // list<int> list1; // Type 2;
    // list1.assign({10, 20, 30, 40, 50});

    // list<int> list2 = {1, 2, 3, 4, 5};   //Type 3;
    // list<int> list1;
    // list1.assign(list2.begin(), list2.end());

    list<int> list1;

    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);
    list1.push_back(40);
    list1.push_back(50);
    for (int i : list1)
    {
        cout << i << " ";
    }
    cout << endl;

    list1.push_front(9);
    list1.push_front(8);
    for (int i : list1)
    {
        cout << i << " ";
    }
    cout << endl;

    list1.pop_back();
    list1.pop_back();
    for (int i : list1)
    {
        cout << i << " ";
    }
    cout << endl;

    list1.pop_front();
    list1.pop_front();
    for (int i : list1)
    {
        cout << i << " ";
    }
    cout << endl;

    list1.insert(next(list1.begin(), 3), 200);
    for (int i : list1)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}