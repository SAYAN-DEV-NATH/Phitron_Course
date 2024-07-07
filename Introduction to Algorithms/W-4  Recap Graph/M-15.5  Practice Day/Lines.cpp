#include <bits/stdc++.h>
using namespace std;
const int N = 45;
char mat[N][N];
bool vis[N][N];
pair<int, int> path[N][N];
vector<pair<int, int>> d = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
int n;

bool valid(int ci, int cj)
{
    return !(ci < 0 or ci >= n or cj < 0 or cj >= n);
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = p.first + d[i].first;
            int cj = p.second + d[i].second;

            if (valid(ci, cj) and !vis[ci][cj] and (mat[ci][cj] == '.' or mat[ci][cj] == 'X'))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                path[ci][cj] = {p.first, p.second};
            }
        }
    }
}
int main()
{
    int si, sj, ei, ej;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];

            if (mat[i][j] == '@')
                si = i, sj = j;
            if (mat[i][j] == 'X')
                ei = i, ej = j;
        }
    }
    memset(vis, false, sizeof(vis));
    memset(path, -1, sizeof(path));
    bfs(si, sj);
    if (vis[ei][ej])
    {
        cout << "Y" << endl;

        while (ei != -1 and ej != -1)
        {
            mat[ei][ej] = '+';
            auto tmp = path[ei][ej];
            ei = tmp.first;
            ej = tmp.second;
        }

        mat[si][sj] = '@';

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        cout << "N" << endl;
    }
    return 0;
}