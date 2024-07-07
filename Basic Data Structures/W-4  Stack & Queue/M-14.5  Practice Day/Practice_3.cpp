#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> mainStack, copyStack;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mainStack.push(x);
    }

    while (!mainStack.empty())
    {
        int x = mainStack.top();
        cout << x << endl;
        mainStack.pop();
        copyStack.push(x);
    }

    while (!copyStack.empty())
    {
        cout << copyStack.top() << " ";
        copyStack.pop();
    }

    return 0;
}
