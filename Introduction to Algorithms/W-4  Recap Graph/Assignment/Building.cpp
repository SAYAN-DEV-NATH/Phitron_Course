#include <bits/stdc++.h>
using namespace std;

vector<int> par;
vector<int> sz;

int find(int nd)
{
    if (par[nd] == -1)
        return nd;
    return par[nd] = find(par[nd]);
}
void union_size(int a, int b)
{
    a = find(a);
    b = find(b);
    if (sz[a] > sz[b])
    {
        par[b] = a;
        sz[a] += sz[b];
    }
    else
    {
        par[a] = b;
        sz[b] += sz[a];
    }
}

class edge
{
public:
    int u, v, w;
    edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(edge a, edge b)
{
    return a.w < b.w;
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<edge> EdgeList;

    vector<bool> check(n + 1, false);
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        check[u] = true;
        check[v] = true;
        EdgeList.push_back(edge(u, v, w));
        EdgeList.push_back(edge(v, u, w));
    }
    sort(EdgeList.begin(), EdgeList.end(), cmp);
    par.resize(n + 1, -1);
    sz.resize(n + 1, 1);

    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
            flag = false;
    }

    if (flag)
    {
        long long cost = 0;
        for (auto ed : EdgeList)
        {
            int u = ed.u, v = ed.v, w = ed.w;

            u = find(u);
            v = find(v);

            if (u == v)
                continue;
            else
                union_size(u, v), cost += w;
        }
        cout << cost << endl;
    }
    else
        cout << "-1" << endl;

    return 0;
}