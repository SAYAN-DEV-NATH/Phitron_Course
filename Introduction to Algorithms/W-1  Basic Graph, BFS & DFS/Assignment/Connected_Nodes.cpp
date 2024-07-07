#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> v(n + 1);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (v[x].size() > 0)
        {
            sort(v[x].begin(), v[x].end(), greater<int>());
            for (int i : v[x])
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}