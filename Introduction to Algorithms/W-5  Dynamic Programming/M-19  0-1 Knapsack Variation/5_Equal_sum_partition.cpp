#include <bits/stdc++.h>
using namespace std;
int dp[100][100];

bool equal_sum(int n, int a[], int s)
{
    if (n == 0)
        return s == 0;
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        bool op1 = equal_sum(n - 1, a, s - a[n - 1]);
        bool op2 = equal_sum(n - 1, a, s);
        return dp[n][s] = op1 or op2;
    }
    else
        return dp[n][s] = equal_sum(n - 1, a, s);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    if (s % 2 == 0)
    {
        memset(dp, -1, sizeof(dp));
        s = s / 2;
        if (equal_sum(n, a, s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}