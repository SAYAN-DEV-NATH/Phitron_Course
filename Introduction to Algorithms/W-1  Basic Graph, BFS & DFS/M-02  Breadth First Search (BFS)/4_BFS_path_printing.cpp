#include <bits/stdc++.h>
using namespace std;
vector<int> arr[100];
bool vis[100];
int parent[100];

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int c : arr[p])
        {
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
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    int src;
    cin >> src;

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    int distance;
    cin >> distance;
    BFS(src);
    vector<int> path;
    int x = distance;
    while (x != -1)
    {
        path.push_back(x);
        x = parent[x];
    }
    reverse(path.begin(), path.end());
    for (int i : path)
    {
        cout << i << " ";
    }
    return 0;
}
