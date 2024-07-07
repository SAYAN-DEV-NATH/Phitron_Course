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
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// void print_reverse(node *tail)
// {
//     while (tail != NULL)
//     {
//         cout << tail->data << " ";
//         tail = tail->past;
//     }
//     cout << endl;
// }

void reverse(node *head, node *tail)
{
    node *i = head;
    node *j = tail;

    while (i != j && i->past != j)
    {
        swap(i->data, j->data);
        i = i->next;
        j = j->past;
    }
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
    // print_reverse(tail);
    reverse(head, tail);
    print_data(head);
    return 0;
}