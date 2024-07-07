#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
#define endl "\n"
using namespace std;
class edge
{
public:
    int i, j, c;
    edge(int i, int j, int c)
    {
        this->i = i;
        this->j = j;
        this->c = c;
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    vector<edge> edgelist;
    while (e--)
    {
        int i, j, c;
        cin >> i >> j >> c;
        edgelist.push_back(edge(i, j, c));
    }
    vector<int> des(n, INT_MAX);
    des[0] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (edge e : edgelist)
        {
            int i, j, c;
            i = e.i,
            j = e.j,
            c = e.c;
            if (des[i] < INT_MAX and c + des[i] < des[j])
                des[j] = c + des[i];
        }
    }
    bool cycle = true;
    for (edge e : edgelist)
    {
        int i, j, c;
        i = e.i, j = e.j, c = e.c;
        if (des[i] < INT_MAX and des[i] + c < des[j])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
        cout << "YES";
    else
        cout << "NO";
    for (int i : des)
    {
        cout << i << " ";
    }
    return 0;
}