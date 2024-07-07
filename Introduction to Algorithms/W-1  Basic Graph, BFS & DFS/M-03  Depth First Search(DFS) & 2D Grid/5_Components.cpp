#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<vector<int>> v(N);
vector<bool> vis(N, false);

void DFS(int src)
{
    cout << src << " ";
    vis[src] = true;
    for (int c : v[src])
    {
        if (!vis[c])
        {
            DFS(c);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    //  DFS(3);
    int components = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            DFS(i);
            components++;
        }
    }
    cout << endl;
    cout << components << endl;
    return 0;
}