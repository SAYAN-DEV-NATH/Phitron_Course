#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
#define endl "\n"
using namespace std;
vector<int> adj[10];
vector<bool> vis(10, false);
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        for (int c : adj[f])
        {
            if (!vis[c])
            {
                vis[c] = true;
                q.push(c);
            }
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
    }
    bfs(0);
    return 0;
}