#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
char mat[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
int n, m, cnt = 0;

bool valid(int ci, int cj)
{
    return !(ci < 0 or ci >= n or cj < 0 or cj >= m);
}
void dfs(int si, int sj)
{
    cnt++;
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) and !vis[ci][cj] and mat[ci][cj] == '.')
            dfs(ci, cj);
    }
}

int main()
{
    cin >> n >> m;
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    }

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] and mat[i][j] == '.')
            {
                cnt = 0;
                dfs(i, j);
                ans = min(ans, cnt);
            }
        }
    }

    if (ans == INT_MAX)
        cout << "-1" << endl;
    else
        cout << ans << endl;
    return 0;
}