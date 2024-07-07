#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge;
    cin >> node >> edge;

    // int matrix[node][node];
    // memset(matrix, 0, sizeof(matrix));

    // Using vector of vectors for the adjacency matrix
    vector<vector<int>> matrix(node, vector<int>(node, 0));

    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // connection check
    if (matrix[1][2] == 1)
        cout << "Connected";
    else
        cout << "Not Connected";

    return 0;
}