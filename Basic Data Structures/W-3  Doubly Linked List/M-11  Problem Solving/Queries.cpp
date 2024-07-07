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
void insert_head(node *&head, node *&tail, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    n->next = head;
    head = n;
}
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
void print_list(node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
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
void delete_head(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *del = head;
    head = del->next;
    delete del;
}
void delete_position(node *head, node *&tail, int pos)
{
    if (head == NULL)
        return;

    for (int i = 1; i < pos; i++)
    {
        head = head->next;
        if (head == NULL)
            return;
    }
    // if (head->next == NULL)
    //     return;

    node *del = head->next;
    head->next = del->next;

    if (head->next == NULL)
        tail = head;

    delete del;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int queries;
    cin >> queries;
    while (queries--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, tail, v);
            print_list(head);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, v);
            print_list(head);
        }
        else if (x == 2)
        {
            int sz = size(head);
            if (v == 0)
            {
                delete_head(head);
                print_list(head);
            }
            else if (sz > v)
            {
                delete_position(head, tail, v);
                print_list(head);
            }
            else
            {
                print_list(head);
            }
        }
    }
    return 0;
}