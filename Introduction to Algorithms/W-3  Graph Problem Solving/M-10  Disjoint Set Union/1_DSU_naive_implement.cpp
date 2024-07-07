#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int par[N];

void dsuInitialize(int n)
{
    for (int i = 0; i < n; i++)
        par[i] = -1;
    par[1] = 3;
    par[2] = 1;
}
int DSU_Find(int node)
{
    if (par[node] == -1)
        return node;
    return DSU_Find(par[node]);
}
int main()
{
    dsuInitialize(4);

    cout << DSU_Find(0) << endl;
    cout << DSU_Find(1) << endl;
    cout << DSU_Find(2) << endl;
    cout << DSU_Find(3) << endl;
    return 0;
}