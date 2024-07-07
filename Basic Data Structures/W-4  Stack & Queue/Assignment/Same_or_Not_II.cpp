#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Stack
{
public:
    node *head = NULL;

    void push(int val)
    {
        node *n = new node(val);
        if (head == NULL)
        {
            head = NULL;
        }
        n->next = head;
        head = n;
    }
    void pop()
    {
        node *del = head;
        head = del->next;
        delete del;
    }
    int top()
    {
        return head->val;
    }
};

class Queue
{
public:
    node *head = NULL;
    node *tail = NULL;

    void push(int val)
    {
        node *n = new node(val);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
    }
    void pop()
    {
        node *del = head;
        head = del->next;
        delete del;
    }
    int front()
    {
        return head->val;
    }
};
int main()
{
    Stack s;
    Queue q;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n != m)
        cout << "NO\n";
    else
    {
        for (int i = 0; i < n; i++)
        {
            int a, b;
            a = s.top();
            s.pop();
            b = q.front();
            q.pop();

            if (a != b)
            {
                cout << "NO\n";
                return 0;
            }
        }
        cout << "YES\n";
    }
    return 0;
}