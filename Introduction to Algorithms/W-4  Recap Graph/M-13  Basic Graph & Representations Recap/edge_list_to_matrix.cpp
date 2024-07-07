#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge;
    cin >> node >> edge;
    vector<pair<int, int>> EdgeList;

    while (edge--)
    {
        int u, v;
        cin >> u >> v;
        EdgeList.push_back({u, v});
    }
    int mat[node][node];
    memset(mat, 0, sizeof(mat));

    for (auto c : EdgeList)
        mat[c.first][c.second] = 1;

    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}