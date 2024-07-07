
#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq; // max_heap supporter
    while (true)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int n;
            cin >> n;
            pq.push(n);
        }
        else if (x == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Priority queue is empty!" << endl;
            }
        }
        else if (x == 2)
            pq.pop();
        else
            break;
    }
    return 0;
}
