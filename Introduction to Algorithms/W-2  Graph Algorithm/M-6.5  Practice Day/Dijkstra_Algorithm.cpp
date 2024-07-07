#include <bits/stdc++.h>
using namespace std;

int n, s, f;
vector<vector<pair<int, int>>> adj(101);
vector<int> dis(101, INT_MAX);

void bfs(int s)
{
    queue<pair<int, int>> q;
    q.push({s, 0});
    dis[s] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int node = p.first;
        int cost = p.second;
        for (pair<int, int> child : adj[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                q.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    cin >> n >> s >> f;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            if (i != j and x != -1)
            {
                adj[i].push_back({j, x});
            }
        }
    }
    bfs(s);
    if (dis[f] == INT_MAX)
        cout << "-1";
    else
        cout << dis[f];
    return 0;
}