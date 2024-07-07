#include <bits/stdc++.h>
using namespace std;
class myStack
{
    vector<int> v;

public:
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;

    // st.push(10);             // Type --> 1
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