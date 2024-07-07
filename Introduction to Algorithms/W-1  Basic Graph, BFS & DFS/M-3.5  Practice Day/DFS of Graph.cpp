// class Solution
// {
// public:
//     vector<int> ans;
//     void DFS(int src, vector<int> adj[], vector<bool> &vis)
//     {
//         ans.push_back(src);
//         vis[src] = true;
//         for (int c : adj[src])
//         {
//             if (!vis[c])
//             {
//                 DFS(c, adj, vis);
//             }
//         }
//     }
//     vector<int> dfsOfGraph(int V, vector<int> adj[])
//     {
//         vector<bool> vis(V, false);
//         DFS(0, adj, vis);
//         return ans;
//     }
// };