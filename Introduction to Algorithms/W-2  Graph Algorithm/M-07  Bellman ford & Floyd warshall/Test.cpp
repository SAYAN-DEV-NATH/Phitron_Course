#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> dis(N, INT_MAX);

class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edgelist;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edgelist.push_back(Edge(u, v, c));
    }
    int x;
    cin >> x;
    dis[x] = 0;
    for (int i = 0; i < n; i++)
    {
        for (Edge i : edgelist)
        {
            int u, v, c;
            u = i.u;
            v = i.v;
            c = i.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dis[i] << endl;
    }
    return 0;
}