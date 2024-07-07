#include <bits/stdc++.h>
using namespace std;
const int h[] = {1, -1, 0, 0}, v[] = {0, 0, 1, -1};
bool vis[1000][1000];
char c, par[1000][1000], ans[1000000];
int N, M, sx, sy, ex, ey, dist[1000][1000];
queue<pair<int, int>> q;

int main()
{
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf(" %c", &c);
            if (c == '#')
                vis[i][j] = true;
            else if (c == 'A')
            {
                sx = i;
                sy = j;
            }
            else if (c == 'B')
            {
                ex = i;
                ey = j;
            }
        }
    }

    vis[sx][sy] = true;
    q.push({sx, sy});
    while (!q.empty())
    {
        pair<int, int> P = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int dx = P.first + h[i];
            int dy = P.second + v[i];
            if (0 <= dx && dx < N && 0 <= dy && dy < M && !vis[dx][dy])
            {
                if (i == 0)
                    par[dx][dy] = 'D';
                else if (i == 1)
                    par[dx][dy] = 'U';
                else if (i == 2)
                    par[dx][dy] = 'R';
                else if (i == 3)
                    par[dx][dy] = 'L';
                dist[dx][dy] = dist[P.first][P.second] + 1;
                vis[dx][dy] = true;
                q.push({dx, dy});
            }
        }
    }

    if (!vis[ex][ey])
    {
        printf("NO\n");
        return 0;
    }

    printf("YES\n%d\n", dist[ex][ey]);
    pair<int, int> P = {ex, ey};
    for (int i = dist[ex][ey]; i > 0; i--)
    {
        ans[i] = par[P.first][P.second];
        if (ans[i] == 'D')
            P = {P.first - 1, P.second};
        else if (ans[i] == 'U')
            P = {P.first + 1, P.second};
        else if (ans[i] == 'R')
            P = {P.first, P.second - 1};
        else if (ans[i] == 'L')
            P = {P.first, P.second + 1};
    }
    for (int i = 1; i <= dist[ex][ey]; i++)
        printf("%c", ans[i]);
    printf("\n");
}