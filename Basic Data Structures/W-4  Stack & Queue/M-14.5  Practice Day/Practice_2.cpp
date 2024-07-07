#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    queue<int> q;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n != m)
        cout << "NO\n";
    else
    {
        for (int i = 0; i < n; i++)
        {
            int a, b;
            a = s.top();
            s.pop();
            b = q.front();
            q.pop();
            if (a != b)
            {
                cout << "NO\n";
                return 0;
            }
        }
        cout << "YES\n";
    }
    return 0;
}