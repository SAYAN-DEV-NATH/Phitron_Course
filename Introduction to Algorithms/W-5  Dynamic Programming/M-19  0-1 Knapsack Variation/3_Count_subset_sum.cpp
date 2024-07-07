#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int dp[N][N];

int subset_sum(int a[], int n, int s)
{
    if (n == 0)
        return s == 0;
    if (dp[n][s] != -1)
        return dp[n][s];

    if (a[n - 1] <= s)
    {
        int op1 = subset_sum(a, n - 1, s - a[n - 1]);
        int op2 = subset_sum(a, n - 1, s);
        return dp[n][s] = op1 + op2;
    }
    else
        return dp[n][s] = subset_sum(a, n - 1, s);
}
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int s;
    cin >> s;

    memset(dp, -1, sizeof(dp));
    cout << subset_sum(a, n, s) << endl;

    return 0;
}