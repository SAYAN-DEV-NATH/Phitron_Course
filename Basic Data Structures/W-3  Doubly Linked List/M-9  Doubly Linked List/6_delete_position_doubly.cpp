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

void print_data(node *head)
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

void delete_data(node *head, int pos)
{
    for (int i = 1; i <= pos - 1; i++)
    {
        head = head->next;
    }
    node *deleteNode = head->next;
    head->next = deleteNode->next;
    delete deleteNode;
    head->next->past = head;
}

int main()
{
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

    print_data(head);
    delete_data(head, 2);
    print_data(head);
    print_reverse(tail);

    return 0;
}