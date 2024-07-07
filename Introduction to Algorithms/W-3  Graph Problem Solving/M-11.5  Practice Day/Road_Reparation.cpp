#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
#define endl "\n"
#define ll long long int

vector<ll> par(100005, -1);
vector<ll> group(100005, 1);
int find(int n)
{
    if (par[n] == -1)
        return n;
    int l = find(par[n]);
    par[n] = l;
    return l;
}
void union_size(int n1, int n2)
{
    int l1 = find(n1);
    int l2 = find(n2);
    if (group[l1] > group[l2])
    {
        par[l2] = l1;
        group[l1] += group[l2];
    }
    else
    {
        par[l1] = l2;
        group[l2] += group[l1];
    }
}
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
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<Edge> EdgeList;
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        EdgeList.push_back(Edge(u, v, w));
    }
    sort(EdgeList.begin(), EdgeList.end(), cmp);
    ll ans = 0;
    int cnt = 0;
    for (Edge i : EdgeList)
    {
        int u = i.u;
        int v = i.v;
        int w = i.w;
        int lu = find(u);
        int lv = find(v);
        if (lu != lv)
        {
            ans += w;
            cnt++;
            union_size(u, v);
        }
    }

    if (cnt != n - 1)
        cout << "IMPOSSIBLE" << endl;
    else
        cout << ans << endl;
    return 0;
}