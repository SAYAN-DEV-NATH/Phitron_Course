#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myQueue
{
public:
    node *head = NULL;
    node *tail = NULL;

    int sz = 0;
    void push(int val)
    {
        sz++;
        node *n = new node(val);
        if (head == NULL)
        {
            head = n;
            tail = n;
            return;
        }
        tail->next = n;
        tail = n;
    }
    void pop()
    {
        if (sz > 0)
        {
            sz--;
            node *del = head;
            if (del->next == NULL)
            {
                head = NULL;
                tail = NULL;
            }
            else
            {
                head = del->next;
            }
            delete del;
        }
        return;
    }
    int front()
    {
        if (sz > 0)
            return head->val;
        else
            return 0;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz == 0;
    }
};
int main()
{
    myQueue qu;
    // qu.push(10);             //Type-->1
    // qu.push(20);
    // cout << qu.front() << endl;
    // qu.pop();
    // cout << qu.front() << endl;
    // qu.pop();
    // cout << qu.front() << endl;
    // qu.pop();

    int size; // Type-->2
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