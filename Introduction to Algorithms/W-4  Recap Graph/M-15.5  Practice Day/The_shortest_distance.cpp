#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool vis[1005];
int des[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    des[src] = 0;

    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        for (int c : adj[f])
        {
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                des[c] = des[f] + 1;
            }
        }
    }
}
int main()
{
    int n, x;
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int b;
            cin >> b;
            if (b == 1)
                adj[i].push_back(j);
        }
    }
    memset(vis, false, sizeof(vis));
    memset(des, -1, sizeof(des));
    bfs(x);
    for (int i = 1; i <= n; i++)
        cout << des[i] << " ";

    return 0;
}