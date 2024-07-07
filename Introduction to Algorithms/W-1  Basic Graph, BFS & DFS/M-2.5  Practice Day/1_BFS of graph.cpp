// class Solution
// {
// public:
//     vector<int> bfsOfGraph(int V, vector<int> adj[])
//     {
//         vector<int> ans, vis(V, 0);
//         queue<int> q;
//         q.push(0);
//         vis[0] = 1;
//         while (!q.empty())
//         {
//             int f = q.front();
//             q.pop();
//             ans.push_back(f);
//             for (int c : adj[f])
//             {
//                 if (!vis[c])
//                 {
//                     q.push(c);
//                     vis[c] = 1;
//                 }
//             }
//         }
//         return ans;
//     }
// };