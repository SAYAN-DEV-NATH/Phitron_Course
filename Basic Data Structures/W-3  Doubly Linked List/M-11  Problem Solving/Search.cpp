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

void insert_tail(node *&head, node *&tail, int val)
{
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

int main()
{
    int queries;
    cin >> queries;
    while (queries--)
    {
        node *head = NULL;
        node *tail = NULL;
        int val;
        while (1)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_tail(head, tail, val);
        }
        int x;
        cin >> x;
        int pos = 0;
        bool flag = false;
        while (head != NULL)
        {
            pos++;
            if (head->val == x)
            {
                flag = true;
                break;
            }
            head = head->next;
        }
        if (flag)
            cout << pos - 1 << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
