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

void delete_head(node *&head)
{
    node *deleteHead = head;
    head = head->next;

    delete deleteHead;
}

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
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_list(head);
    delete_head(head);
    print_list(head);
    return 0;
}