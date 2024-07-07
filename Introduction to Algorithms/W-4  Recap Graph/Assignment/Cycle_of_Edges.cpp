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

int main()
{
    int n, e;
    cin >> n >> e;

    par.resize(n + 1, -1);
    sz.resize(n + 1, 1);

    int cnt = 0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        a = find(a);
        b = find(b);
        if (a == b)
            cnt++;
        else
            union_size(a, b);
    }
    cout << cnt << endl;
    return 0;
}