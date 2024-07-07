#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
#define endl "\n"

const int N = 100;
int par[N];
int groupSize[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        groupSize[i] = 1;
    }
}
int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (groupSize[leaderA] > groupSize[leaderB])
    {
        par[leaderB] = leaderA;
        groupSize[leaderA] += groupSize[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        groupSize[leaderB] += groupSize[leaderA];
    }
}

class Group
{
public:
    int u, v, w;
    Group(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(Group a, Group b)
{
    return a.w < b.w;
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Group> EdgeList;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        EdgeList.push_back(Group(u, v, w));
    }
    sort(EdgeList.begin(), EdgeList.end(), cmp);
    int totalWeight = 0;
    for (Group i : EdgeList)
    {
        int leaderU = dsu_find(i.u);
        int leaderV = dsu_find(i.v);

        if (leaderU == leaderV)
            continue;
        else
        {
            dsu_union_by_size(i.u, i.v);
            totalWeight += i.w;
        }
    }
    cout << totalWeight << endl;
    return 0;
}