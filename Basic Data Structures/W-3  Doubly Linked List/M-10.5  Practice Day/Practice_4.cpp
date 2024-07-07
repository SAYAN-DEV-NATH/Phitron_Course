#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *past;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->past = NULL;
    }
};

void insert_tail(node *head, node *&tail, int data)
{
    node *n = new node(data);
    tail->next = n;
    n->past = tail;
    n->next = NULL;
    tail = n;
}

void insert_head(node *&head, node *&tail, int data)
{
    node *n = new node(data);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    n->next = head;
    head->past = n;
    n->past = NULL;
    head = n;
}

void insert_position(node *head, node *&tail, int pos, int data)
{
    node *n = new node(data);
    for (int i = 1; i <= pos - 1; i++)
    {
        head = head->next;
    }
    if (head == NULL)
        return;
    n->next = head->next;
    head->next = n;
    n->next->past = n;
    n->past = head;
}

void print_normal(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void print_reverse(node *tail)
{
    while (tail != NULL)
    {
        cout << tail->data << " ";
        tail = tail->past;
    }
    cout << endl;
}

int size(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}

int main()
{
    int q, x, v;
    cin >> q;
    node *head = NULL;
    node *tail = NULL;
    while (q--)
    {
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, tail, v);
            print_normal(head);
            print_reverse(tail);
        }
        else if (x < size(head) && x > 0)
        {
            insert_position(head, tail, x, v);
            print_normal(head);
            print_reverse(tail);
        }
        else if (x == size(head))
        {
            insert_tail(head, tail, v);
            print_normal(head);
            print_reverse(tail);
        }
        else if (x > size(head))
        {
            cout << "Invalid\n";
        }
    }
    return 0;
}