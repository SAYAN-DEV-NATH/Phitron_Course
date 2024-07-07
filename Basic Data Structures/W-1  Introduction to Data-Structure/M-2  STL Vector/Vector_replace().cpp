#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 30, 4, 5};
    replace(v.begin(), v.end(), 30, 3);
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}