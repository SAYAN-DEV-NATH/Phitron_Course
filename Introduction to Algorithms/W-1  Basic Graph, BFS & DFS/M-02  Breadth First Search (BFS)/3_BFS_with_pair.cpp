#include <bits/stdc++.h>
using namespace std;
vector<int> arr[100];
bool vis[100];

void BFS(int src, int dis)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    bool flag = false; /// Level checking

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        int par = p.first;
        int level = p.second;

        if (par == dis)
        {
            cout << level << endl;
            flag = true;
        }

        for (int c : arr[par])
        {
            if (!vis[c])
            {
                q.push({c, level + 1});
                vis[c] = true;
            }
        }
    }
    if (!flag) /// Level na paile cout -1
        cout << "-1" << endl;
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

    int distance;
    cin >> distance;
    BFS(src, distance);

    return 0;
}