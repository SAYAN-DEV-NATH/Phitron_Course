#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // v.assign({1, 2, 3, 4, 5});
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    vector<int> v = {1, 2, 3, 4, 5};
    for (int &x : v)
    {
        cout << x << " ";
    }
    return 0;
}