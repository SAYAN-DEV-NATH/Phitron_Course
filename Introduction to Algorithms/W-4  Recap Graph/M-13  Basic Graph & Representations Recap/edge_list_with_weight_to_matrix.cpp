#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
int main()
{
    int node, edge;
    cin >> node >> edge;
    vector<Edge> EdgeList;

    while (edge--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        EdgeList.push_back(Edge(u, v, w));
    }
    int mat[node][node];
    memset(mat, 0, sizeof(mat));

    for (auto c : EdgeList) //---------------main work here
        mat[c.u][c.v] = c.w;

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