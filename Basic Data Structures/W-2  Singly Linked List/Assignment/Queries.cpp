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
    tail = n;
}

void insert_head(node *&head, node *&tail, int data)
{
    node *n = new node(data);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    n->next = head;
    head = n;
}

void delete_head(node *&head, node *&tail)
{

    if (head == NULL)
        return;

    node *deleteNode = head;
    head = deleteNode->next;

    if (head == NULL)
        tail = NULL;

    delete deleteNode;
}

void delete_data(node *head, node *&tail, int pos)
{
    if (head == NULL)
        return;

    for (int i = 1; i <= pos - 1; i++)
    {
        head = head->next;
        if (head == NULL)
            return;
    }
    if (head->next == NULL)
        return;

    node *deleteNode = head->next;
    head->next = deleteNode->next;

    if (head->next == NULL)
        tail = head;

    delete deleteNode;
}

void print_list(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    int Q;
    cin >> Q;

    while (Q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_head(head, tail, v);
            print_list(head);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, v);
            print_list(head);
        }
        else
        {
            if (v == 0)
            {
                delete_head(head, tail);
                print_list(head);
            }
            else
            {
                delete_data(head, tail, v);
                print_list(head);
            }
        }
    }
    return 0;
}