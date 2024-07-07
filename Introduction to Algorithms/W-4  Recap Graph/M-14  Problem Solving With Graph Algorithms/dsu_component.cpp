#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int Size[N];

void Make(int v)
{
    par[v] = v;
    Size[v] = 1;
}
int Find(int v)
{
    if (par[v] == v)
        return v;
    return par[v] = Find(par[v]);
}
void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);
    if (a != b)
    {
        if (a < b)
            swap(a, b);
        par[b] = a;
        Size[a] += Size[b];
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < n; i++)
        Make(i);

    while (e--)
    {
        int u, v;
        cin >> u >> v;
        if (Find(u) != Find(v))
            Union(u, v);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == Find(i))
            cnt++;
    }
    cout << "There are " << cnt << " Components.";
    return 0;
}