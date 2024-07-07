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

void InsertAtTail(node *&head, int v)
{
    node *newnode = new node(v);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

void deleteAtPosition(node *head, int pos)
{
    node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}

void print_linked_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ->";
        tmp = tmp->next;
    }
    cout << "NULL\n\n";
}

int main()
{
    node *head = NULL;
    while (true)
    {
        cout << " 1: Insert at Tail.\n";
        cout << " 2: Delete from Position.\n";
        cout << " 3: Print Linked List.\n";
        cout << " 4: Terminate.\n";

        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cout << "Please enter data :: ";
            cin >> v;

            InsertAtTail(head, v);
        }
        else if (op == 2)
        {
            int pos;
            cout << "Enter delete position :: ";
            cin >> pos;

            deleteAtPosition(head, pos);
        }
        else if (op == 3)
            print_linked_list(head);

        else if (op == 4)
            break;
    }
    return 0;
}