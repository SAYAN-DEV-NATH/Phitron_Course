#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    int mn = INT_MAX, store;
    for (int i = 1; i <= n; i++)
    {
        cnt++;
        int x;
        cin >> x;
        if (mn > x)
            mn = x;
        if (cnt == k)
        {
            cout << mn << " ";

            cnt = 0;
            mn = INT_MAX;
            store = mn;
        }
    }
    if (store == mn)
        return 0;
    else
        cout << mn << " ";
    return 0;
}