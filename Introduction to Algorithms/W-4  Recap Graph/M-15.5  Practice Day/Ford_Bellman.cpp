#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
#define endl "\n"
using namespace std;
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> des(n + 1, INT_MAX);
    vector<Edge> EdgeList;
    while (m--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    des[1] = 0;
    for (int i = 0; i < n; i++)
    {
        for (auto el : EdgeList)
        {
            int u, v, c;
            u = el.u;
            v = el.v;
            c = el.c;
            if (des[u] < INT_MAX and des[u] + c < des[v])
            {
                des[v] = des[u] + c;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (des[i] == INT_MAX)
            cout << "30000 ";
        else
            cout << des[i] << " ";
    }
    return 0;
}