#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> adj[n];
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    int mat[n][n];
    memset(mat, 0, sizeof(mat));
    for (int i = 0; i < n; i++) //--------Main Work
    {
        for (pair<int, int> c : adj[i])
        {
            mat[i][c.first] = c.second;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}