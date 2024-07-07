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

int size(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

int main()
{
    node *head1 = NULL;
    node *tail1 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head1, tail1, val);
    }
    node *head2 = NULL;
    node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head2, tail2, val);
    }

    if (size(head1) != size(head2))
        cout << "NO\n";
    else
    {
        while (head1 != NULL)
        {
            if (head1->val != head2->val)
            {
                cout << "NO\n";
                return 0;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        cout << "YES\n";
    }
    return 0;
}
