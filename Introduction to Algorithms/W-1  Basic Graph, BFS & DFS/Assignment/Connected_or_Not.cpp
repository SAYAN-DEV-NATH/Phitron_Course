#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a][b] = 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;

        if (a == b)
            cout << "YES\n";
        else if (v[a][b] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}