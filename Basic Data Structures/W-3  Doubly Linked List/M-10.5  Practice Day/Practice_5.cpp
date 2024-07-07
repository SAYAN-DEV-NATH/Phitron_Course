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

void insert_tail(node *&head, node *&tail, int data)
{
    node *n = new node(data);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    n->past = tail;
    n->next = NULL;
    tail = n;
}

void print_data(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void sort_data(node *head)
{
    for (node *i = head; i->next != NULL; i = i->next)
    {
        for (node *j = i; j->next != NULL; j = j->next)
        {
            if (i->data > j->next->data)
            {
                swap(i->data, j->next->data);
            }
        }
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    int data;
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;
        insert_tail(head, tail, data);
    }

    sort_data(head);
    print_data(head);

    return 0;
}