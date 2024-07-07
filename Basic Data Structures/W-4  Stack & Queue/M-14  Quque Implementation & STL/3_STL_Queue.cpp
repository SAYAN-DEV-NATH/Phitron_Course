#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> qu;

    // qu.push(10);             //Type - 1
    // qu.push(20);
    // cout << qu.size() << endl;
    // cout << qu.front() << endl;
    // qu.pop();
    // cout << qu.front() << endl;

    int size;
    cin >> size;
    while (size--)
    {
        int n;
        cin >> n;
        qu.push(n);
    }

    while (!qu.empty())
    {
        cout << qu.front() << endl;
        qu.pop();
    }
    cout << qu.front() << endl;
    qu.pop();
    return 0;
}