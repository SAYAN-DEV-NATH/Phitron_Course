#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> l1 = {1, 2, 3, 4, 5};

    // l1.clear();
    // cout << l1.size() << endl;
    // cout << l1.max_size() << endl;

    // if (l1.empty())
    //     cout << "Empty" << endl;0
    // else
    //     cout << "No Empty" << endl;

    l1.resize(2);
    for (int v : l1)
    {
        cout << v << " ";
    }
    cout << endl;

    l1.resize(5);
    for (int v : l1)
    {
        cout << v << " ";
    }
    cout << endl;

    l1.resize(10, 10);
    for (int v : l1)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}