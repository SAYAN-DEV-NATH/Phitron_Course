#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
#define endl "\n"
using namespace std;
vector<pair<int, int>> adj[10];
vector<int> des(10, INT_MAX);

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int s)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> q;
    q.push({s, 0});
    des[s] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.top();
        q.pop();
        int node = p.first;
        int cost = p.second;
        for (pair<int, int> child : adj[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if (cost + childCost < des[childNode])
            {
                des[childNode] = cost + childCost; // path relex
                q.push({childNode, des[childNode]});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int i, j, c;
        cin >> i >> j >> c;
        adj[i].push_back({j, c});
    }
    dijkstra(0);
    return 0;
}