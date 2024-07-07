#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<vector<int>> adj(N);
vector<bool> visited(N, false);
vector<int> parent(N, -1);

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        for (int c : adj[f])
        {
            if (!visited[c])
            {
                parent[c] = f;
                visited[c] = true;
                q.push(c);
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
    int x = n, cnt = 0;
    vector<int> s;
    while (x != -1)
    {
        cnt++;
        s.push_back(x);
        x = parent[x];
    }
    reverse(s.begin(), s.end());
    if (visited[n])
    {
        cout << cnt << endl;
        for (int i : s)
            cout << i << " ";
    }
    else
        cout << "IMPOSSIBLE";

    return 0;
}
