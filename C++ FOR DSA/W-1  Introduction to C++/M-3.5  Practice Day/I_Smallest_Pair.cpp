#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int mn=INT_MAX, ans;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                ans = arr[i] + arr[j] + j - i;
                mn = min(mn, ans);
            }
        }
        cout << mn << endl;
    }
    return 0;
}