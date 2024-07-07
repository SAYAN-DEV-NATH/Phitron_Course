#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;       type->1
    // cout << v.size();

    // vector<int> v(5);    type->2
    // cout << v.size();

    // vector<int> v(5, 1);         type->3
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // vector<int> v(5);               type->4
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // vector<int> v = {1, 2, 3, 4, 5};     type->5
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // vector<int> v = {1, 2, 3, 4, 5};     type->6
    // vector<int> v1(v);
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1[i] << " ";
    // }

    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v(a, a + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}