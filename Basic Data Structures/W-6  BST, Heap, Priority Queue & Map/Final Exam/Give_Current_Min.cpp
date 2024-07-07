#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int queries;
    cin >> queries;
    while (queries--)
    {
        int val;
        cin >> val;
        if (val == 0)
        {
            n++;
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (val == 1)
        {
            if (n > 0)
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (val == 2)
        {
            if (n > 0)
            {
                n--;
                pq.pop();
                if (n > 0)
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}