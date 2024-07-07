// https: // leetcode.com/problems/find-if-path-exists-in-graph/
// class Solution
// {
// public:
//     vector<bool> visited;
//     vector<vector<int>> adj;

//     void dfs(int src, vector<vector<int>> &adj)
//     {
//         visited[src] = true;
//         for (int child : adj[src])
//         {
//             if (!visited[child])
//                 dfs(child, adj);
//         }
//     }

//     bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
//     {
//         visited.resize(n, false);
//         adj.resize(n);
//         for (int i = 0; i < edges.size(); i++)
//         {
//             int a = edges[i][0];
//             int b = edges[i][1];
//             adj[a].push_back(b);
//             adj[b].push_back(a);
//         }
//         dfs(source, adj);
//         return visited[destination];
//     }
// };