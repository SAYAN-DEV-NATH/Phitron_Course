#include <bits/stdc++.h>
using namespace std;
vector<int> arr[100];
bool vis[100];
int level[100];

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        // cout << p << " ";
        for (int c : arr[p])
        {
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                level[c] = level[p] + 1;
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
    memset(level, -1, sizeof(level));
    BFS(src);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << level[i] << endl;
    }
    return 0;
}
