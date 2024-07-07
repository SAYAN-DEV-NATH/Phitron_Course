#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        stack<char> s, q;
        for (int i = 0; i < size; i++)
        {
            char c;
            cin >> c;
            if (s.empty())
                s.push(c);
            else if ((s.top() == 'R' && c == 'B') || (s.top() == 'B' && c == 'R'))
            {
                s.pop();
                if (s.empty())
                    s.push('P');
                else
                {
                    if (s.top() == 'P')
                        s.pop();
                    else
                        s.push('P');
                }
            }
            else if ((s.top() == 'R' && c == 'G') || (s.top() == 'G' && c == 'R'))
            {
                s.pop();
                if (s.empty())
                    s.push('Y');
                else
                {
                    if (s.top() == 'Y')
                        s.pop();
                    else
                        s.push('Y');
                }
            }
            else if ((s.top() == 'B' && c == 'G') || (s.top() == 'G' && c == 'B'))
            {
                s.pop();
                if (s.empty())
                    s.push('C');
                else
                {
                    if (s.top() == 'C')
                        s.pop();
                    else
                        s.push('C');
                }
            }
            else if (s.top() == 'R' && c == 'R')
                s.pop();
            else if (s.top() == 'B' && c == 'B')
                s.pop();
            else if (s.top() == 'G' && c == 'G')
                s.pop();
            else
                s.push(c);
        }
        while (!s.empty())
        {
            q.push(s.top());
            s.pop();
        }
        while (!q.empty())
        {
            cout << q.top();
            q.pop();
        }
        cout << endl;
    }
    return 0;
}