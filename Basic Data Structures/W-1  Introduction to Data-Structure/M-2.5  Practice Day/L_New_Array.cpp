#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    vector<int> v3(v2);
    // for(int i=0;i<n;i++){
    //     int x = v1[i];
    //     v3.push_back(x);
    // }
    v3.insert(v3.begin() + n, v1.begin(), v1.end());

    for (int i : v3)
    {
        cout << i << " ";
    }
    return 0;
}