// https: // leetcode.com/problems/number-of-closed-islands/
// class Solution
// {
// public:
//     vector<vector<bool>> visited;
//     vector<pair<int, int>> d = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
//     int n, m;
//     bool valid(int i, int j)
//     {
//         if (i < 0 or i >= n or j < 0 or j >= m)
//             return false;
//         return true;
//     }
//     void dfs(int si, int sj, vector<vector<int>> &grid)
//     {
//         visited[si][sj] = true;
//         for (int i = 0; i < 4; i++)
//         {
//             int ci = si + d[i].first;
//             int cj = sj + d[i].second;
//             if (valid(ci, cj) and !visited[ci][cj] and grid[ci][cj] == 0)
//                 dfs(ci, cj, grid);
//         }
//     }
//     int closedIsland(vector<vector<int>> &grid)
//     {
//         n = grid.size();
//         m = grid[0].size();
//         visited.resize(n, vector<bool>(m, false));
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (i == 0 or j == 0 or i == n - 1 or j == m - 1)
//                 {
//                     if (!visited[i][j] and grid[i][j] == 0)
//                         dfs(i, j, grid);
//                 }
//             }
//         }
//         int cnt = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (!visited[i][j] and grid[i][j] == 0)
//                 {
//                     cnt++;
//                     dfs(i, j, grid);
//                 }
//             }
//         }
//         return cnt;
//     }
// };