#include <bits/stdc++.h>
using namespace std;
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
    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    vector<int> des(n + 1, INT_MAX);
    des[1] = 0;
    for (int i = 0; i < n; i++)
    {
        for (Edge i : EdgeList)
        {
            int u, v, c;
            u = i.u;
            v = i.v;
            c = i.c;
            if (des[u] < INT_MAX and des[u] + c < des[v])
                des[v] = des[u] + c;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (des[i] == INT_MAX)
            cout << "30000 ";
        else
            cout << des[i] << " ";
    }
    return 0;
}