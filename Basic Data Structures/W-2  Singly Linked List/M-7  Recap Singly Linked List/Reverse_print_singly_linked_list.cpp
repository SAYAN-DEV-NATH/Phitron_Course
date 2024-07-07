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

void reverse_print_list(node *head)
{
    node *tmp = head;
    if (tmp == NULL)
        return;

    reverse_print_list(tmp->next);
    cout << tmp->data << " ";
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

    reverse_print_list(head);

    return 0;
}