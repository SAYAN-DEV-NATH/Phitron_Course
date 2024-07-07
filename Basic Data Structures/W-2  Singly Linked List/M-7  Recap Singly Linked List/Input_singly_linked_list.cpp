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
    display(head);

    return 0;
}