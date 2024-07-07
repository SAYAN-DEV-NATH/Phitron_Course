#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> st;

    // st.push(10);         //Type --> 1
    // st.push(20);

    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;

    int size;
    cin >> size;
    while (size--)
    {
        int n;
        cin >> n;
        st.push(n);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}