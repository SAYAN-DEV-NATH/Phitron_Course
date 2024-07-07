#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;

int LCS(string a, int n, string b, int m)
{
    if (n == 0 or m == 0)
        return 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    if (a[n - 1] == b[m - 1])
    {
        int ans = LCS(a, n - 1, b, m - 1);
        return dp[n][m] = ans + 1;
    }
    else
    {
        int op1 = LCS(a, n - 1, b, m);
        int op2 = LCS(a, n, b, m - 1);
        return dp[n][m] = max(op1, op2);
    }
}
int main()
{
    string a, b;
    cin >> a >> b;

    int n = a.size();
    int m = b.size();

    dp.resize(n + 1, vector<int>(m + 1, -1));
    cout << LCS(a, n, b, m) << endl;
    return 0;
}