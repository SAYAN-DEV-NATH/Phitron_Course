#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> path;

void bfs(int src, int dis)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int c : adj[p])
        {
            if (!visited[c])
            {
                q.push(c);
                visited[c] = true;
                path[c] = p;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    adj.resize(n);
    visited.resize(n, false);
    path.resize(n, -1);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int src, dis;
    cin >> src >> dis;
    bfs(src, dis);

    set<int> ans;
    int x = dis;
    while (x != -1)
    {
        ans.insert(x);
        x = path[x];
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}