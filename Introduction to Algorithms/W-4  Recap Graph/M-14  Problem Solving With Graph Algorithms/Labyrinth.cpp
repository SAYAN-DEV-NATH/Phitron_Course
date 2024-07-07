#include <bits/stdc++.h>
#define f first
#define s second
#define pii pair<int, int>
using namespace std;

const int N = 1005;
char mat[N][N];
// bool vis[N][N];
vector<vector<bool>> vis(N, vector<bool>(N, false));
// pii par[N][N];
vector<vector<pii>> par(N, vector<pii>(N, {-1, -1}));

vector<pii> moves = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int ci, int cj) { return !(ci < 0 or ci >= n or cj < 0 or cj >= m); }
void bfs(int si, int sj)
{
    queue<pii> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = p.f + moves[i].f;
            int cj = p.s + moves[i].s;
            if (valid(ci, cj) and !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                par[ci][cj] = {p.f, p.s};
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    // memset(vis, false, sizeof(vis));

    pii a, b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == '#')
                vis[i][j] = true;
            if (mat[i][j] == 'A')
            {
                a.f = i;
                a.s = j;
            }
            if (mat[i][j] == 'B')
            {
                b.f = i;
                b.s = j;
            }
        }
    }

    bfs(a.f, a.s);
    if (vis[b.f][b.s])
    {
        cout << "YES" << endl;
        pii x = b, tmp;
        int cnt = 0;
        stack<char> st;

        while (true)
        {
            cnt++;

            tmp = par[x.f][x.s];
            if (tmp.f == x.f and tmp.s < x.s)
                st.push('R');
            else if (tmp.f == x.f and tmp.s > x.s)
                st.push('L');
            else if (tmp.f > x.f and tmp.s == x.s)
                st.push('U');
            else
                st.push('D');
            x = tmp;

            if (x.f == a.f and x.s == a.s)
                break;
        }
        cout << cnt << endl;
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
    }
    else
        cout << "NO" << endl;
    return 0;
}