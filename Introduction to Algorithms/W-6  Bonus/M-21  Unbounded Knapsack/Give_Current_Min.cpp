#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> s;
    while (n--)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int a;
            cin >> a;
            s.push(a);
            cout << s.top() << endl;
        }
        else if (x == 1)
        {
            if (s.size() > 0)
                cout << s.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (x == 2)
        {
            if (s.size() > 0)
            {
                s.pop();
                if (s.size() > 0)
                    cout << s.top() << endl;
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}