#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<pair<int, int>> graph[N];
int dis[N];

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        int node = parent.first;
        int ParentCost = parent.second;

        for (int i = 0; i < graph[node].size(); i++)
        {
            pair<int, int> child = graph[node][i];

            int childNode = child.first;
            int childCost = child.second;

            if (ParentCost + childCost < dis[childNode])
            {
                // path relaxation
                dis[childNode] = ParentCost + childCost;
                q.push({childNode, dis[childNode]});
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
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << i << "-> " << dis[i] << endl;
    }

    return 0;
}