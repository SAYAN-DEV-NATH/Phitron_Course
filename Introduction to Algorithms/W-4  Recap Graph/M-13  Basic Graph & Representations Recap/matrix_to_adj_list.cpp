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

    vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
                adj[i].push_back(j);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int c : adj[i])
            cout << i << " " << c << endl;
    }
    return 0;
}