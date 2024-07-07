#include <bits/stdc++.h>
using namespace std;

const int N = 1001;
vector<vector<char>> adj(N, vector<char>(N));
vector<vector<bool>> vis(N, vector<bool>(N, false));
vector<pair<int, int>> d = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 or i >= n or j < 0 or j >= m)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < d.size(); i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) and !vis[ci][cj] and adj[ci][cj] != '#')
            dfs(ci, cj);
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> adj[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] and adj[i][j] != '#')
            {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}