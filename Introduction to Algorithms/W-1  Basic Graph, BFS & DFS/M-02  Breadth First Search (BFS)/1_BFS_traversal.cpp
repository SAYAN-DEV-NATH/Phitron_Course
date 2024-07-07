#include <bits/stdc++.h>
using namespace std;
// vector<int> arr[1000];
vector<vector<int>> arr(10000);
bool vis[1000];

void BFS(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = true;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        cout << p << " ";
        for (int c : arr[p]) /// for (int i=0; i<arr[p].size(); i++)
        {
            if (vis[c] == false) /// if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
            }
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;

    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    int source;
    cin >> source;
    memset(vis, false, sizeof(vis));
    BFS(source);
    return 0;
}