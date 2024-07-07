#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
vector<int> par;

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int c : adj[p])
        {
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                par[c] = p;
            }
        }
    }
}
int main()
{
    int c, r;
    cin >> c >> r;
    adj.resize(c);
    vis.resize(c, false);
    par.resize(c, -1);

    while (r--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int x, y, k;
    cin >> x >> y >> k;
    bfs(x);
    if (vis[y])
    {
        int d = y, cnt = 0;
        while (d != x)
        {
            cnt++;
            d = par[d];
        }
        if (ceil(cnt / 2.0) <= k)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
    return 0;
}