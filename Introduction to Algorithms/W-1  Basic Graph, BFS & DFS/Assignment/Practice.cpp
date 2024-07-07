#include <bits/stdc++.h>
using namespace std;
const int N = 20;
vector<vector<int>> adj(N);
vector<bool> visited(N, false);

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        cout << f << " ";
        for (int c : adj[f])
        {
            if (!visited[c])
            {
                q.push(c);
                visited[c] = true;
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
    int src;
    cin >> src;
    bfs(src);
    return 0;
}