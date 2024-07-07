#include <bits/stdc++.h>
using namespace std;
vector<int> par;
vector<int> sz;

int find(int n)
{
    if (par[n] == -1)
        return n;
    return par[n] = find(par[n]);
}
void union_size(int a, int b)
{
    a = find(a);
    b = find(b);

    if (a != b)
    {
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
}

int main()
{
    int n, m;
    cin >> n >> m;

    par.resize(n + 1, -1);
    sz.resize(n + 1, 1);

    int cc = n;
    int mx = 1;

    while (m--)
    {
        int a, b;
        cin >> a >> b;

        a = find(a);
        b = find(b);

        if (a != b)
        {
            union_size(a, b);
            cc--;
        }
        mx = max(mx, max(sz[a], sz[b]));
        cout << cc << " " << mx << endl;
    }
    return 0;
}