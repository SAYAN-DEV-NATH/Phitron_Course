#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> par;
vector<ll> sz;

ll find(ll nd)
{
    if (par[nd] == -1)
        return nd;
    return par[nd] = find(par[nd]);
}
void union_size(ll a, ll b)
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
    ll u, v, w;
    edge(ll u, ll v, ll w)
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
    ll n, e;
    cin >> n >> e;
    par.resize(n + 1, -1);
    sz.resize(n + 1, 1);

    vector<edge> edgelist;
    vector<bool> check(n + 1, false);

    for (int i = 0; i < e; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        check[u] = true;
        check[v] = true;
        edgelist.push_back(edge(u, v, w));
        edgelist.push_back(edge(v, u, w));
    }
    sort(edgelist.begin(), edgelist.end(), cmp);

    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
            flag = false;
    }

    if (flag)
    {
        ll cnt = 0, cost = 0;
        for (auto ed : edgelist)
        {
            int u = ed.u, v = ed.v, w = ed.w;
            u = find(u);
            v = find(v);
            if (u == v)
                continue;
            else
                union_size(u, v), cost += w, cnt++;
        }
        cout << (e - cnt) << " "
             << cost << endl;
    }
    else
        cout << "Not Possible";

    return 0;
}