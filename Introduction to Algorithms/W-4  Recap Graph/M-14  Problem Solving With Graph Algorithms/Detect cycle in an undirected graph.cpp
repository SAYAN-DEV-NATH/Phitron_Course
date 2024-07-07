// class Solution
// {
// public:
//     int par[100005];
//     int sz[100005];

//     void make(int v)
//     {
//         par[v] = v;
//         sz[v] = 1;
//     }
//     int find(int v)
//     {
//         if (par[v] == v)
//             return v;
//         return par[v] = find(par[v]);
//     }
//     void union_size(int a, int b)
//     {
//         a = find(a);
//         b = find(b);

//         if (a != b)
//         {
//             if (a < b)
//                 swap(a, b);
//             par[b] = a;
//             sz[a] += sz[b];
//         }
//     }

//     bool isCycle(int V, vector<int> adj[])
//     {
//         for (int i = 0; i < V; i++)
//             make(i);
//         map<pair<int, int>, bool> mp;
//         for (int i = 0; i < V; i++)
//         {
//             for (int c : adj[i])
//             {
//                 if (mp[{c, i}])
//                     continue;
//                 mp[{i, c}] = true;

//                 int lu = find(i);
//                 int lv = find(c);

//                 if (lu == lv)
//                     return true;
//                 else
//                     union_size(i, c);
//             }
//         }
//         return false;
//     }
// };/*  */