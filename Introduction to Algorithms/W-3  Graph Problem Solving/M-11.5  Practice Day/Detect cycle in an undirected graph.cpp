// public:
// int parent[100005];
// int group_size[100005];
// void dsu_initialize(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         parent[i] = -1;
//         group_size[i] = 1;
//     }
// }
// int find(int node)
// {
//     if (parent[node] == -1)
//         return node;
//     else
//     {
//         int leader = find(parent[node]);
//         parent[node] = leader;
//         return leader;
//     }
// }
// void union_by_size(int node, int node2)
// {
//     int leaderA = find(node);
//     int leaderB = find(node2);
//     if (group_size[leaderA] > group_size[leaderB])
//     {
//         parent[leaderB] = leaderA;
//         group_size[leaderA] += group_size[leaderB];
//     }
//     else
//     {
//         parent[leaderA] = leaderB;
//         group_size[leaderB] += group_size[leaderA];
//     }
// }
// bool isCycle(int V, vector<int> adj[])
// {
//     // Code here
//     dsu_initialize(V);
//     map<pair<int, int>, bool> mp;
//     for (int i = 0; i < V; i++)
//     {
//         for (int c : adj[i])
//         {
//             if (mp[{c, i}])
//                 continue;
//             mp[{i, c}] = true;
//             if (find(i) == find(c))
//             {
//                 return true;
//             }
//             union_by_size(i, c);
//         }
//     }
//     return false;
// }