#include <bits/stdc++.h>
using namespace std;

const int N = 1001;
vector<vector<char>> adj(N, vector<char>(N));
vector<vector<bool>> vis(N, vector<bool>(N, false));
vector<pair<int, int>> d = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
int n, m;
int cnt = 0;

bool valid(int i, int j)
{
    if (i < 0 or i >= n or j < 0 or j >= m)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    cnt++;
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

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] and adj[i][j] != '#')
            {
                dfs(i, j);
                pq.push(cnt);
                cnt = 0;
            }
        }
    }
    if (pq.size() > 0)
    {
        while (!pq.empty())
        {
            cout << pq.top() << " ";
            pq.pop();
        }
    }
    else
        cout << "0";
    return 0;
}