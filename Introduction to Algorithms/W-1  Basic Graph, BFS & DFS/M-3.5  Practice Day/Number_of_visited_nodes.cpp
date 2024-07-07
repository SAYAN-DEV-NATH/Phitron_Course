#include <bits/stdc++.h>
using namespace std;
int cnt = 0;

void dfs(int src, vector<vector<int>> &v, vector<bool> &vis)
{
    cnt++;
    vis[src] = true;
    for (int c : v[src])
    {
        if (!vis[c])
            dfs(c, v, vis);
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> v(n);
    vector<bool> vis(n, false);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    dfs(src, v, vis);
    cout << cnt << endl;
    return 0;
}