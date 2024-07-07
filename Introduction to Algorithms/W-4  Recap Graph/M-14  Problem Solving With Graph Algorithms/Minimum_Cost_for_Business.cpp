#include <bits/stdc++.h>
using namespace std;

vector<int> par;
vector<int> Size;
int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    int l = dsu_find(par[node]);
    par[node] = l;
    return l;
}
void dsu_union_by_size(int node1, int node2)
{
    int l1 = dsu_find(node1);
    int l2 = dsu_find(node2);
    if (Size[l1] > Size[l2])
    {
        par[l2] = l1;
        Size[l1] += Size[l2];
    }
    else
    {
        par[l1] = l2;
        Size[l2] += Size[l1];
    }
}
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
bool cmp(Edge a, Edge b)
{
    return a.c < b.c;
}
int main()
{
    int n, e;
    cin >> n >> e;
    par.resize(n, -1);
    Size.resize(n, 1);

    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    sort(EdgeList.begin(), EdgeList.end(), cmp);
    int cost = 0;
    for (auto ed : EdgeList)
    {
        int lu = dsu_find(ed.u);
        int lv = dsu_find(ed.v);

        if (lu == lv)
            continue;
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            cost += ed.c;
        }
    }
    cout << cost << endl;
    return 0;
}