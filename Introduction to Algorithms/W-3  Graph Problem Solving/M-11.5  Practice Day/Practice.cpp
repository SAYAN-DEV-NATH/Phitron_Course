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
bool cmp(Edge &a, Edge &b)
{
    return a.c < b.c;
}
const int N = 1e5 + 5;
int parent[N];
int grp_size[N];
void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        grp_size[i] = 1;
    }
}
int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    return leader;
}
void union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (grp_size[leaderA] > grp_size[leaderB])
    {
        parent[leaderB] = leaderA;
        grp_size[leaderA] += grp_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        grp_size[leaderB] += grp_size[leaderA];
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> eglist;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        eglist.push_back(Edge(a, b, c));
    }
    sort(eglist.begin(), eglist.end(), cmp);
    int totalCost = 0;
    int m = 0;
    for (Edge eg : eglist)
    {
        int leaderU = dsu_find(eg.u);
        int leaderV = dsu_find(eg.v);
        if (leaderU == leaderV)
        {
            continue;
        }
        else
        {
            union_by_size(eg.u, eg.v);
            totalCost += eg.c;
            m++;
        }
    }
    if (m == n - 1)
    {
        cout << totalCost << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}