#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert_tail(node *head, int data)
{
    node *n = new node(data);
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    n->next = tmp->next;
    tmp->next = n;
}

void insert_pos(node *head, int pos, int data)
{
    node *n = new node(data);
    node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    n->next = tmp->next;
    tmp->next = n;
}

void insert_head(node *&head, int data)
{
    node *n = new node(data);

    n->next = head;
    head = n;
}

void display(node *head)
{
    node *tmp = head;

    cout << "\n";
    while (tmp != NULL)
    {
        cout << tmp->data << " -> ";
        tmp = tmp->next;
    }
    cout << "NULL\n\n";
}

int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    display(head);
    insert_pos(head, 2, 300);
    insert_head(head, 1000);
    insert_tail(head, 5000);
    display(head);

    return 0;
}