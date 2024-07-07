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
void union_by_size(int node1, int node2)
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
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    bool flag = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
            flag = true;
        else
            union_by_size(a, b);
    }
    if (flag)
        cout << "Cycle found" << endl;
    else
        cout << "Cycle not found" << endl;
    return 0;
}