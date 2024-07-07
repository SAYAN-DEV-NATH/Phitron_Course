// #include <bits/stdc++.h>
// using namespace std;
// class myStack
// {
//     vector<int> v;

// public:
//     void push(int val)
//     {
//         v.push_back(val);
//     }
//     void pop()
//     {
//         v.pop_back();
//     }
//     int top()
//     {
//         return v.back();
//     }
//     int size()
//     {
//         return v.size();
//     }
//     bool empty()
//     {
//         return v.empty();
//     }
// };
// int main()
// {
//     myStack s1, s2;

//     int n;
//     cin >> n;
//     while (n--)
//     {
//         int x;
//         cin >> x;
//         s1.push(x);
//     }

//     int m;
//     cin >> m;
//     while (m--)
//     {
//         int x;
//         cin >> x;
//         s2.push(x);
//     }

//     if (s1.size() != s2.size())
//         cout << "NO\n";
//     else
//     {
//         for (int i = 0; i < s1.size(); i++)
//         {
//             int a, b;
//             a = s1.top();
//             s1.pop();
//             b = s2.top();
//             s2.pop();

//             if (a != b)
//             {
//                 cout << "NO\n";
//                 return 0;
//             }
//         }
//         cout << "YES\n";
//     }
//     return 0;
// }
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
        if (sz > 0)
        {
            sz--;
            node *del = tail;
            if (del->prev == NULL)
            {
                head = NULL;
                tail = NULL;
            }
            else
            {
                tail = del->prev;
            }
            delete del;
        }
        else
            return;
    }
    int top()
    {
        if (sz > 0)
            return tail->val;
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
    myStack s1, s2;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s1.push(x);
    }
    int m;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        s2.push(x);
    }
    if (s1.size() != s2.size())
        cout << "NO\n";
    else
    {
        for (int i = 0; i < s1.size(); i++)
        {
            int a, b;
            a = s1.top();
            s1.pop();
            b = s2.top();
            s2.pop();
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