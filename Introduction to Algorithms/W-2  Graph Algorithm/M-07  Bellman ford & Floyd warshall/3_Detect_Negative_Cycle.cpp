#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> des(N, INT_MAX);

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
    des[0] = 0;
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
    bool cycle = false;
    for (Edge i : EdgeList)
    {
        int u, v, c;
        u = i.u;
        v = i.v;
        c = i.c;
        if (des[u] < INT_MAX and des[u] + c < des[v])
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
        cout << "Cycle found and no answer";
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << des[i] << endl;
        }
    }
    return 0;
}