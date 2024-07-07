#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    ll n, e;
    cin >> n >> e;
    ll mat[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            mat[i][j] = INT_MAX;
            if (i == j)
                mat[i][j] = 0;
        }
    }

    while (e--)
    {
        int i, j, c;
        cin >> i >> j >> c;
        mat[i][j] = c;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (mat[i][k] + mat[k][j] < mat[i][j])
                    mat[i][j] = mat[i][k] + mat[k][j];
            }
        }
    }
    bool cycle = false;
    for (int i = 1; i <= n; i++)
    {
        if (mat[i][i] < 0)
        {
            cycle = true;
            break;
        }
    }

    return 0;
}