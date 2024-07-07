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

void insert_position(node *head, int pos, int data)
{
    node *n = new node(data);
    for (int i = 1; i <= pos - 1; i++)
    {
        head = head->next;
    }
    n->next = head->next;
    head->next = n;

    n->next->past = n;
    n->past = head;
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
    node *head = new node(10); // Here->Head
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);
    node *tail = d; // Here->tail

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    d->past = c;
    c->past = b;
    b->past = a;
    a->past = head;

    cout << size(head) << endl;
    insert_position(head, 3, 4000);
    cout << size(head);

    return 0;
}