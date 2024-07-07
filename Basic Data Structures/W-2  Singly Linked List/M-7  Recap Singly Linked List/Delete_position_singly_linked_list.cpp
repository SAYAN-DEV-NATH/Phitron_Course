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

void delete_data(node *head, int pos)
{
    node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid Index\n";
            return;
        }
    }
    node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;

    delete deleteNode;
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
    delete_data(head, 2);
    print_list(head);

    delete_data(head, 3);
    print_list(head);
    return 0;
}