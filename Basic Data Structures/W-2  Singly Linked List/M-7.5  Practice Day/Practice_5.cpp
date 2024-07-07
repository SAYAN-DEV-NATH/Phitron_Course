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

void insert_data(node *&head, node *&tail, int data)
{
    node *n = new node(data);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    tail = n;
}

void print_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
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

        insert_data(head, tail, data);
    }

    for (node *i = head; i != NULL; i = i->next)
    {
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (i->data < j->data)
                swap(i->data, j->data);
        }
    }

    print_list(head);

    return 0;
}