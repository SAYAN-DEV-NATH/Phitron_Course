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
    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        EdgeList.push_back(Edge(u, v, w));
    }

    vector<pair<int, int>> adj[n];

    for (auto ed : EdgeList)
        adj[ed.u].push_back({ed.v, ed.w});

    for (int i = 0; i < n; i++)
    {
        for (auto c : adj[i])
            cout << i << " " << c.first << " " << c.second << endl;
    }

    return 0;
}