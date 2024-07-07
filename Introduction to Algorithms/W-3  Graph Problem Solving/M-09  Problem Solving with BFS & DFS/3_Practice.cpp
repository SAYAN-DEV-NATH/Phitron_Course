// https: // leetcode.com/problems/max-area-of-island/
// class Solution
// {
// public:
//     int cnt = 0;
//     vector<vector<bool>> visited;
//     vector<pair<int, int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
//     int n, m;
//     bool valid(int i, int j)
//     {
//         if (i < 0 or i >= n or j < 0 or j >= m)
//             return false;
//         return true;
//     }
//     void dfs(int si, int sj, vector<vector<int>> &grid)
//     {
//         cnt++;
//         visited[si][sj] = true;
//         for (int i = 0; i < 4; i++)
//         {
//             int ci = si + d[i].first;
//             int cj = sj + d[i].second;
//             if (valid(ci, cj) and !visited[ci][cj] and grid[ci][cj] == 1)
//                 dfs(ci, cj, grid);
//         }
//     }
//     int maxAreaOfIsland(vector<vector<int>> &grid)
//     {
//         n = grid.size();
//         m = grid[0].size();
//         visited.resize(n, vector<bool>(m, false));
//         int ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (!visited[i][j] and grid[i][j] == 1)
//                 {
//                     dfs(i, j, grid);
//                     ans = max(cnt, ans);
//                     cnt = 0;
//                 }
//             }
//         }
//         return ans;
//     }
// };