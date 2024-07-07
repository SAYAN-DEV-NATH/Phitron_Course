#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;

// int knapsack(int n, int s, int val[], int wei[]) {
//     if(n == 0 or s == 0) return 0;
//     if(dp[n][s] != -1) return dp[n][s];

//     if(wei[n-1] <= s) {

//         int op1 = knapsack(n, s-wei[n-1], val, wei) + val[n-1];
//         int op2 = knapsack(n-1, s, val, wei);
//         return dp[n][s] = max(op1, op2);

//     } else {
//         return dp[n][s] = knapsack(n-1, s, val, wei);
//     }
// }

int main() {
    int n, w; cin >> n >> w;
    int value[n], weight[n];

    dp.resize(n+1, vector<int>(w+1, 0));
    dp[0][0] = 0;

    for(int i=0; i<n; i++) cin >> value[i];
    for(int i=0; i<n; i++) cin >> weight[i];

    // cout << knapsack(n, w, value, weight) << endl;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=w; j++) {

            if(weight[i-1] <= j) {

                int op1 = dp[i][j-weight[i-1]] + value[i-1];
                int op2 = dp[i-1][j];
                dp[i][j] = max(op1, op2);

            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout << dp[n][w] << endl;

    return 0;
}