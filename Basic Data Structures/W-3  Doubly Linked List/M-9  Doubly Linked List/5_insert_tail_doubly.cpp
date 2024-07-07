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

void print_normal(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL\n";
}

void print_reverse(node *tail)
{
    while (tail != NULL)
    {
        cout << tail->data << "->";
        tail = tail->past;
    }
    cout << "NULL\n";
}

void insert_tail(node *&head, node *&tail, int data)
{
    node *n = new node(data);
    if (head == NULL) // Here Error Handle
    {
        head = n;
        tail = n;
        return;
    }
    /* while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = n;
    n->past = head;
    tail = n; */

    tail->next = n;
    n->past = tail;
    tail = n;
}

int main()
{
    // node *head = NULL;
    // node *tail = NULL;

    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);
    node *tail = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    d->past = c;
    c->past = b;
    b->past = a;
    a->past = head;

    int data;
    cin >> data;
    insert_tail(head, tail, data);
    print_normal(head);
    print_reverse(tail);

    return 0;
}