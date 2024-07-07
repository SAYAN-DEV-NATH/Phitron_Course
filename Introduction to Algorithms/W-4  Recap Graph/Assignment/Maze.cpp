#include <bits/stdc++.h>
#define pii pair<int, int>
#define F first
#define S second
using namespace std;
char mat[1003][1003];
bool vis[1003][1003];
pii par[1003][1003];
vector<pii> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int ci, int cj)
{
    return !(ci < 0 or ci >= n or cj < 0 or cj >= m);
}
void bfs(int si, int sj)
{
    queue<pii> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pii p = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = p.F + d[i].F;
            int cj = p.S + d[i].S;

            if (valid(ci, cj) and !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                par[ci][cj] = {p.F, p.S};
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    memset(vis, false, sizeof(vis));
    memset(par, -1, sizeof(par));
    int si, sj, ei, ej;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == '#')
                vis[i][j] = true;
            if (mat[i][j] == 'R')
                si = i, sj = j;
            if (mat[i][j] == 'D')
                ei = i, ej = j;
        }
    }
    bfs(si, sj);

    if (!vis[ei][ej])
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        while (ei != si || ej != sj)
        {
            auto tmp = par[ei][ej];
            ei = tmp.F;
            ej = tmp.S;
            mat[ei][ej] = 'X';
        }
        mat[ei][ej] = 'R';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
