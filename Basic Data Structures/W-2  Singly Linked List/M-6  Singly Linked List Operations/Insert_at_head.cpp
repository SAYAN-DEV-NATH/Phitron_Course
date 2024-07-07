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
    node *n = new node(v);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = n;
}
void InsertAtPosition(node *head, int pos, int v)
{
    node *n = new node(v);
    node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    n->next = tmp->next;
    tmp->next = n;
}
void InsertAtHead(node *&head, int v)
{
    node *n = new node(v);
    n->next = head;
    head = n;
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
        cout << " 2: Insert at any Postion.\n";
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
            int pos, data;
            cout << "Enter Position and Data :: ";
            cin >> pos >> data;

            if (pos == 1)
                InsertAtHead(head, data);
            else
                InsertAtPosition(head, pos, data);
        }
        else if (op == 3)
            print_linked_list(head);
        else if (op == 4)
            break;
    }
    return 0;
}