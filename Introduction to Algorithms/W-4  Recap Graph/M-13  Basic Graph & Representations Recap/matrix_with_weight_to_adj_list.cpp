#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    vector<pair<int, int>> adj[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] > 0)
                adj[i].push_back({j, mat[i][j]});
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (auto c : adj[i])
            cout << i << " " << c.first << " " << c.second << endl;
    }
    return 0;
}