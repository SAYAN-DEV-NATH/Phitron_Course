#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<vector<int>> adj(N);
vector<bool> vis(N);
vector<int> parent(N, -1);
bool ans;

void dfs(int src)
{
    vis[src] = true;
    for (int c : adj[src])
    {
        if (vis[c] and parent[src] != c)
            ans = true;

        if (!vis[c])
        {
            parent[c] = src;
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
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    // cout << parent[3] << endl;
    if (ans)
        cout << "Cycle Found";
    else
        cout << "Cycle Not Found";

    return 0;
}