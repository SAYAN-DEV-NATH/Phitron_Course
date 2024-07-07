#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
#define endl "\n"
using namespace std;
vector<int> adj[10];
vector<bool> vis(10, false);
void dfs(int s)
{
    vis[s] = true;
    for (int c : adj[s])
    {
        if (!vis[c])
            dfs(c);
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
    }
    dfs(0);
    return 0;
}