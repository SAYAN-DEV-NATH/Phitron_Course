#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<vector<int>> adj(N);
vector<bool> vis(N);
vector<bool> path_vis(N);
bool ans;

void dfs(int src)
{
    vis[src] = true;
    path_vis[src] = true;
    for (int c : adj[src])
    {
        if (path_vis[c])
        {
            cout << src << " " << c << endl;
            ans = true;
            return;
        }

        if (!vis[c])
            dfs(c);
    }
    path_vis[src] = false;
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
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }

    if (ans)
        cout << "Cycle Found";
    else
        cout << "Cycle Not Found";
    return 0;
}
