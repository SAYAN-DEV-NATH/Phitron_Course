#include <bits/stdc++.h>
using namespace std;
const int N = 55;
vector<int> adj[N];
vector<bool> vis(N, false);
vector<bool> pathVis(N, false);
bool flag = false;

void dfs(int s)
{
    vis[s] = true;
    pathVis[s] = true;
    for (int c : adj[s])
    {
        if (pathVis[c])
        {
            flag = true;
            return;
        }
        if (!vis[c])
            dfs(c);
    }
    pathVis[s] = false;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
                adj[i].push_back(j);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    if (flag)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    return 0;
}