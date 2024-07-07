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

    int pos, data;
    cin >> pos >> data;

    if (pos >= size(head) || pos <= 0) // Here Error Handle
    {
        cout << "Invalid Index!!!" << endl;
    }
    else
    {
        insert_position(head, pos, data);
    }

    print_normal(head);
    print_reverse(tail); // without any function

    return 0;
}