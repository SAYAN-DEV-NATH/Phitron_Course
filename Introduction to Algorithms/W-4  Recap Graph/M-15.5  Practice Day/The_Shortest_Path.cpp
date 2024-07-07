#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;
const int N = 2005;
vector<pair<int, int>> adj[N];
vector<bool> vis(N, false);
vector<int> des(N, INT_MAX);
vector<int> par(N, -1);

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};
void bfs(int s)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> q;
    q.push({s, 0});
    vis[s] = true;
    des[s] = 0;

    while (!q.empty())
    {
        auto p = q.top();
        q.pop();
        int u = p.F;
        int cost = p.S;
        for (auto child : adj[u])
        {
            int v = child.F;
            int childCost = child.S;
            if (childCost + cost < des[v])
            {
                des[v] = childCost + cost;
                q.push({v, des[v]});
                par[v] = u;
                vis[v] = true;
            }
        }
    }
}
int main()
{
    int n, m, s, f;
    cin >> n >> m >> s >> f;
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    bfs(s);

    if (vis[f])
    {
        cout << des[f] << endl;
        stack<int> st;
        while (f != -1)
        {
            st.push(f);
            f = par[f];
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
    return 0;
}