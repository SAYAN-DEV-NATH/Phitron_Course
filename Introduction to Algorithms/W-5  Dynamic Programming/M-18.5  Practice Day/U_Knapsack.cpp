#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
#define endl "\n"
#define ll long long int
#define ld long double
#define pi pair<int, int>
using namespace std;

const int max_n = 1005;
const int max_w = 1005;
int dp[max_n][max_w];

int knapsack(int n, int weight[], int value[], int w)
{
    if (n == 0 or w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];

    if (weight[n - 1] <= w)
    {
        int op1 = knapsack(n - 1, weight, value, w - weight[n - 1]) + value[n - 1];
        int op2 = knapsack(n - 1, weight, value, w);
        return dp[n][w] = max(op1, op2);
    }
    else
        return dp[n][w] = knapsack(n - 1, weight, value, w);
}

int main()
{
    int n, w;
    cin >> n >> w;

    int weight[n], value[n];
    for (int i = 0; i < n; i++)
        cin >> weight[i] >> value[i];

    memset(dp, -1, sizeof(dp));
    cout << knapsack(n, weight, value, w) << endl;

    return 0;
}