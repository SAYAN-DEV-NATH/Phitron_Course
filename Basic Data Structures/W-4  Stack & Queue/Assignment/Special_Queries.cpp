#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    int queries;
    cin >> queries;
    while (queries--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else
        {
            if (q.size() > 0)
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid\n";
            }
        }
    }
    return 0;
}