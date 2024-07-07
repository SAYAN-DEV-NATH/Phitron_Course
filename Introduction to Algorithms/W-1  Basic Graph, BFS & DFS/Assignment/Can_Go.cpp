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
void dfs(pair<int, int> src)
{
    vis[src.first][src.second] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = src.first + d[i].first;
        int cj = src.second + d[i].second;
        if (valid(ci, cj) and !vis[ci][cj] and adj[ci][cj] != '#')
            dfs({ci, cj});
    }
}
int main()
{

    cin >> n >> m;
    pair<int, int> src, dst;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> adj[i][j];

            if (adj[i][j] == 'A')
                src = {i, j};
            if (adj[i][j] == 'B')
                dst = {i, j};
        }
    }

    dfs(src);
    if (vis[dst.first][dst.second])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}