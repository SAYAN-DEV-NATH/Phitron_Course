#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    // vector<int> mat[n];
    vector<vector<int>> mat(n);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << "-> ";
        for (int c : mat[i])
            cout << c << " ";
        cout << endl;
    }

    return 0;
}