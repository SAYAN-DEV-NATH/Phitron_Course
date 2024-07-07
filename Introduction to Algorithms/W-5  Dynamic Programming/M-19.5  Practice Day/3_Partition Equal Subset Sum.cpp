// class Solution {
// public:
//     vector<vector<int>> dp;
//     bool fun(vector<int>& nums, int n, int s)
//     {
//         if(n==0) return s==0;
//         if(dp[n][s] != -1) return dp[n][s];

//         if(nums[n-1] <= s)
//         {
//             bool op1 = fun(nums, n-1, s - nums[n-1]);
//             bool op2 = fun(nums, n-1, s);
//             return dp[n][s] = op1 or op2;
//         }
//         else
//             return dp[n][s] = fun(nums, n-1, s);
//     }
//     bool canPartition(vector<int>& nums) 
//     {
//         int n = 0, s = 0;
//         for(int i:nums) n++, s += i;
//         if(s%2==0)
//         {
//             s = s/2;
//             dp.resize(n+1, vector<int>(s+1, -1));
//             if(fun(nums, n, s)) return true;
//             else return false;
//         }
//         else
//             return false;
//     }
// };