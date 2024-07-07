#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5}; // Type->1
    v.insert(v.begin() + 1, 10);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> v1 = {1, 2, 3, 4, 5}; // Type->2
    v1.insert(v1.begin() + 1, {10, 20, 30});
    for (int x : v1)
    {
        cout << x << " ";
    }
    cout << "\n";

    vector<int> v3 = {6, 7, 8}; // Type->3
    vector<int> v2 = {1, 2, 3, 4, 5};
    v2.insert(v2.begin() + 1, v3.begin(), v3.end());
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}