#include <bits/stdc++.h>
using namespace std;
vector<int> ans;

void bfs(vector<vector<int>> &arr, int src, vector<bool> &vis, int level)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int f = p.first;
        int l = p.second;

        if (l == level)
            ans.push_back(f);

        for (int c : arr[f])
        {
            if (!vis[c])
            {
                q.push({c, l + 1});
                vis[c] = true;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> arr(n);
    vector<bool> vis(n, false);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int level;
    cin >> level;
    bfs(arr, 0, vis, level);

    sort(ans.begin(), ans.end(), greater<int>());
    for (int i : ans)
        cout << i << " ";
    return 0;
}