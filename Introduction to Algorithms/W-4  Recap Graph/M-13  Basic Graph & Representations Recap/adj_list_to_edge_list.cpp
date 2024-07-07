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
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> adj[n];
    while (e--)
    {
        int i, j, c;
        cin >> i >> j >> c;
        adj[i].push_back({j, c});
    }
    vector<Edge> EdgeList;
    for (int i = 0; i < n; i++)
    {
        for (pair<int, int> c : adj[i])
        {
            EdgeList.push_back(Edge(i, c.first, c.second));
        }
    }
    for (auto ed : EdgeList)
        cout << ed.u << " " << ed.v << " " << ed.w << endl;
    return 0;
}