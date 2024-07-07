#include <bits/stdc++.h>
using namespace std;
const int N = 105;
vector<int> adj[N];
bool vis[N];

void dfs(int src)
{
    vis[src] = true;
    for (int c : adj[src])
    {
        if (!vis[c])
        {
            dfs(c);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cnt++;
            dfs(i);
        }
    }
    if (cnt > 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}