#include <bits/stdc++.h>
using namespace std;
const int N = 500005;
vector<int> adj[N];
vector<bool> vis(N, false);
vector<int> path(N, -1);

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
                path[c] = p;
            }
        }
    }
}
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(a);
    if (vis[b])
    {
        int x = b;
        int cnt = 0;
        stack<int> st;
        while (x != -1)
        {
            cnt++;
            st.push(x);
            x = path[x];
        }
        cout << cnt - 1 << endl;
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}