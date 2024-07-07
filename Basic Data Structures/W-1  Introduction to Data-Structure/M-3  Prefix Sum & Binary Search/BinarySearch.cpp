#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (q--)
    {
        int l, r, mid;
        l = 0;
        r = n - 1;
        bool flag = false;
        int x;
        cin >> x;
        while (l <= r) // Binary Search;
        {
            mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            else if (x > a[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }

        if (flag)
            cout << "found\n";
        else
            cout << "not found\n";
    }

    return 0;
}