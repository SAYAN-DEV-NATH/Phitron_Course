#include <bits/stdc++.h>
using namespace std;
vector<int> arr[10];
int vis[10];
int parent[10];

void bfs(int src, int dis)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        for (int c : arr[f])
        {
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                parent[c] = f;
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

    int queries;
    cin >> queries;
    while (queries--)
    {
        memset(vis, false, sizeof(vis));
        memset(parent, -1, sizeof(parent));
        int src, dis;
        cin >> src >> dis;
        bfs(src, dis);

        vector<int> path;
        int x = dis;
        while (x != -1)
        {
            path.push_back(x);
            x = parent[x];
        }

        // for (int i : path)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;

        if (src == dis)
            cout << "0" << endl;
        else if (path.size() == 1)
            cout << "-1" << endl;
        else
            cout << path.size() - 1 << endl;
    }
    return 0;
}