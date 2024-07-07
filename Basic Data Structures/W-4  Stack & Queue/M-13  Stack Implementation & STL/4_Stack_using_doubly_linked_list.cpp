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

class myStack
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
        n->prev = tail;
        tail = n;
    }
    void pop()
    {
        sz--;
        node *del = tail;

        if (tail->prev == NULL)
            head = NULL;
        else
            tail = tail->prev;

        delete del;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
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
class myStack
{
public:
    node *head = NULL;
    node *tail = NULL;
    int cnt = 0;

    void push(int val)
    {
        cnt++;
        node *n = new node(val);
        if (head == NULL)
        {
            head = n;
            tail = n;
            return;
        }
        tail->next = n;
        n->prev = tail;
        tail = n;
    }
    void pop()
    {
        if (cnt > 0)
        {
            cnt--;
            node *del = tail;

            if (del->prev == NULL)
                head = NULL;
            else
                tail = del->prev;

            delete del;
        }
        return;
    }
    int top()
    {
        if (cnt > 0)
            return tail->val;
        return 0;
    }
    int size()
    {
        return cnt;
    }
    bool empty()
    {
        return cnt == 0;
    }
};
int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    return 0;
}