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

void print_list(node *head)
{
    node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->data << "->";
        tmp = tmp->next;
    }
    cout << "NULL\n";
}

int main()
{
    node *head = new node(40);
    node *a = new node(20);
    node *b = new node(10);
    node *c = new node(30);
    node *d = new node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_list(head);

    for (node *i = head; i->next != NULL; i = i->next)
    {
        for (node *j = i->next; j->next != NULL; j = j->next)
        {
            if (i->data > j->data)
                swap(i->data, j->data);
        }
    }

    print_list(head);
    return 0;
}