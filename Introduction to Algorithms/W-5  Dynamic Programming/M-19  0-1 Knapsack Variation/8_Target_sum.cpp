#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int dp[N][N];

int subsetsum(int arr[], int n, int s)
{
    if(n < 0 or s == 0) return s==0;
    if(dp[n][s] != -1) return dp[n][s];

    if(arr[n-1] <= s)
    {
        int op1 = subsetsum(arr, n-1, s - arr[n-1]);
        int op2 = subsetsum(arr, n-1, s);
        return dp[n][s] = op1 + op2;
    }
    else
        return dp[n][s] = subsetsum(arr, n-1, s);
}
int main() {
    int n; cin >> n;

    int arr[n], s = 0;
    for(int i=0; i<n; i++) cin >> arr[i], s += arr[i];

    memset(dp, -1, sizeof(dp));

    int difference; cin >> difference;
    s = (difference+s) / 2;
    cout << subsetsum(arr, n, s);

    return 0;
}