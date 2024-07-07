#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int> li;
    void push(int val)
    {
        li.push_back(val);
    }
    void pop()
    {
        li.pop_front();
    }
    int front()
    {
        if (li.size() > 0)
            return li.front();
        return 0;
    }
    int size()
    {
        return li.size();
    }
    bool empty()
    {
        return li.empty();
    }
};
int main()
{
    myQueue qu;

    int size;
    cin >> size;
    while (size--)
    {
        int n;
        cin >> n;
        qu.push(n);
    }

    cout << qu.size() << endl;
    while (!qu.empty())
    {
        cout << qu.front() << endl;
        qu.pop();
    }

    return 0;
}