#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<vector<int>> adj(N);
vector<bool> vis(N);
vector<int> parent(N, -1);
bool ans;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int c : adj[p])
        {
            if (vis[c] and parent[p] != c)
            {
                ans = true;
                cout << p << " " << c << endl;
            }
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                parent[c] = p;
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
        adj[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            bfs(i);
    }

    if (ans)
        cout << "Cycle Found";
    else
        cout << "Cycle Not Found";

    return 0;
}