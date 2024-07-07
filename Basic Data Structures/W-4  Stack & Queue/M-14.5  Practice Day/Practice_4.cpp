#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> mainQueue, copyQueue;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        mainQueue.push(x);
    }
    stack<int> tmp;
    while (!mainQueue.empty())
    {
        int x = mainQueue.front();
        mainQueue.pop();
        tmp.push(x);
    }
    while (!tmp.empty())
    {
        int x = tmp.top();
        tmp.pop();
        copyQueue.push(x);
    }
    while (!copyQueue.empty())
    {
        cout << copyQueue.front() << " ";
        copyQueue.pop();
    }

    return 0;
}