#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> v(20, vector<char>(20));
vector<vector<int>> dis(20, vector<int>(20, -1));
vector<vector<bool>> vis(20, vector<bool>(20, false));
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void BFS(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        for (int i = 0; i < d.size(); i++)
        {
            int ci = p.first + d[i].first;
            int cj = p.second + d[i].second;

            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[p.first][p.second] + 1;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    BFS(si, sj);

    cout << dis[2][3];
    return 0;
}