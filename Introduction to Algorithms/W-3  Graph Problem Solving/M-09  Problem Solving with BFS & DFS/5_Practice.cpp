// https: // leetcode.com/problems/count-sub-islands/
// class Solution
// {
// public:
//     vector<vector<bool>> visited;
//     vector<pair<int, int>> d = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
//     int n, m;
//     bool flag;
//     bool valid(int ci, int cj)
//     {
//         if (ci < 0 or ci >= n or cj < 0 or cj >= m)
//             return false;
//         return true;
//     }
//     void dfs(int si, int sj, vector<vector<int>> &grid1, vector<vector<int>> &grid2)
//     {
//         visited[si][sj] = true;
//         if (grid1[si][sj] == 0)
//             flag = false;
//         for (int i = 0; i < 4; i++)
//         {
//             int ci = si + d[i].first;
//             int cj = sj + d[i].second;
//             if (valid(ci, cj) and !visited[ci][cj] and grid2[ci][cj] == 1)
//                 dfs(ci, cj, grid1, grid2);
//         }
//     }
//     int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
//     {
//         n = grid1.size();
//         m = grid1[0].size();
//         visited.resize(n, vector<bool>(m, false));
//         int cnt = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (!visited[i][j] and grid2[i][j] == 1)
//                 {
//                     flag = true;
//                     dfs(i, j, grid1, grid2);
//                     if (flag)
//                         cnt++;
//                 }
//             }
//         }
//         return cnt;
//     }
// };