#include <bits/stdc++.h>

using namespace std;
const int N = 1e3+5;
int dp[N][N];

bool knapsack(int arr[], int n, int m)
{
    if(n < 0 or m == 0) return m == 0;
    if(dp[n][m] != -1) return dp[n][m];

    if(arr[n-1] <= m)
    {
        bool op1 = knapsack(arr, n-1, m - arr[n-1]);
        bool op2 = knapsack(arr, n-1, m);
        return dp[n][m] = (op1 or op2);
    }
    else
    {
        return dp[n][m] = (knapsack(arr, n-1, m));
    }
}
int main(){
  
    int test; cin >> test;
    while(test--)
    {
        int n, m; cin >> n >> m;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];

        memset(dp, -1, sizeof(dp));
        m = 1000 - m;

        if(knapsack(arr, n, m)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}