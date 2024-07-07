// class Solution {
// public:
//     vector<vector<int>> dp;
//     int fun(vector<int>& nums, int n, int s) {
//         if (n == 0)
//             return s == 0;
//         if (dp[n][s] != -1)
//             return dp[n][s];

//         if (nums[n - 1] <= s) {
//             int op1 = fun(nums, n - 1, s - nums[n - 1]);
//             int op2 = fun(nums, n - 1, s);
//             return dp[n][s] = op1 + op2;
//         } else
//             return dp[n][s] = fun(nums, n - 1, s);
//     }
//     int findTargetSumWays(vector<int>& nums, int target) {
//         int n = nums.size();
//         int s = accumulate(nums.begin(), nums.end(), 0);

//         // Check if it's impossible to achieve the target sum
//         if (s < abs(target) || (s + target) % 2 != 0)
//             return 0;

//         s = (s + target) / 2;
//         dp.resize(n + 1, vector<int>(s + 1, -1));
//         return fun(nums, n, s);
//     }
// };