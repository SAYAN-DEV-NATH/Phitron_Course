#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq; // min heap
    while (true)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int n;
            cin >> n;
            pq.push(n);
        }
        else if (c == 1)
            cout << pq.top() << endl;
        else if (c == 2)
            pq.pop();
        else
            break;
    }
    return 0;
}