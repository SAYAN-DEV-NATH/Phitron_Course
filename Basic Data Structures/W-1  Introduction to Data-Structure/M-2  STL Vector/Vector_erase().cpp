#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v; // Type->1
    v.assign({1, 2, 3, 4, 5});
    v.erase(v.begin() + 3);
    for (int &i : v)
    {
        cout << i << " ";
    }
    cout << "\n";

    vector<int> v1 = {1, 2, 3, 4, 5};
    v1.erase(v1.begin() + 1, v1.end() - 1);
    for (int i : v1)
    {
        cout << i << " ";
    }
    return 0;
}