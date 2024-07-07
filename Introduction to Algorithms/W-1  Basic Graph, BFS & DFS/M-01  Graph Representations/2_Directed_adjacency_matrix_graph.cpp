#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge;
    cin >> node >> edge;

    vector<vector<int>> matrix(node, vector<int>(node, 0));

    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        matrix[a][b] = 1;
    }
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}