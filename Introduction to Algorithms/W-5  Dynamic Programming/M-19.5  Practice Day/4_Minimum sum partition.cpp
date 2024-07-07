// class Solution
// {
// public:
//     int minDifference(int arr[], int n)
//     {
//         int s = 0;
//         for (int i = 0; i < n; i++)
//             s += arr[i];

//         bool dp[n + 1][s + 1];
//         for (int i = 0; i <= n; i++)
//         {
//             for (int j = 0; j <= s; j++)
//             {
//                 dp[i][j] = false;
//             }
//         }
//         dp[0][0] = true; // Base case

//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 0; j <= s; j++)
//             {
//                 if (arr[i - 1] <= j)
//                     dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
//                 else
//                     dp[i][j] = dp[i - 1][j];
//             }
//         }

//         vector<int> v;
//         for (int i = 0; i <= s; i++)
//         {
//             if (dp[n][i] != 0)
//                 v.push_back(i);
//         }
//         int ans = INT_MAX;
//         for (int i : v)
//         {
//             int s1 = i;
//             int s2 = s - s1;
//             ans = min(ans, abs(s1 - s2));
//         }
//         return ans;
//     }
// };