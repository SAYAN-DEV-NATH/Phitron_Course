#include <bits/stdc++.h>
using namespace std;
class myStack
{
    list<int> l;

public:
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
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