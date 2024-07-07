// class Solution
// {   
// public:
//     int dp[1005][1005];
//     bool fun(vector<int> arr, int n, int s)
//     {
//         if(n<0 or s<=0) return s==0;
//         if(dp[n][s] != -1) return dp[n][s];
        
//         if(arr[n-1] <= s)
//         {
//             bool op1 = fun(arr, n-1, s - arr[n-1]);
//             bool op2 = fun(arr, n-1, s);
//             return dp[n][s] = op1 or op2;
//         }
//         else
//         {
//             return dp[n][s] = fun(arr, n-1, s);
//         }
//     }
//     bool isSubsetSum(vector<int>arr, int sum)
//     {
//         memset(dp, -1, sizeof(dp));
//         int n = arr.size();
//         return fun(arr, n, sum);
//     }
// };