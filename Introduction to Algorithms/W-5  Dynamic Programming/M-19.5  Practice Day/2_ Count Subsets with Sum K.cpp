// vector<vector<int>> dp;
// const int N = 1e9+7;

// int fun(vector<int>& arr, int n, int s)
// {
//     if(n==0) return s==0;
//     if(dp[n][s] != -1) return dp[n][s];

//     if(arr[n-1] <= s)
//     {
//         int op1 = fun(arr, n-1, s-arr[n-1]);
//         int op2 = fun(arr, n-1, s);
//         return dp[n][s] = (op1 + op2)%N;
//     }
//     else
//     {
//         return dp[n][s] = (fun(arr, n-1, s))%N;
//     }
// }
// int findWays(vector<int>& arr, int k)
// {
// 	int n = arr.size();
//     dp.resize(n+1, vector<int>(k+1, -1));
//     return fun(arr, n, k);
// }
