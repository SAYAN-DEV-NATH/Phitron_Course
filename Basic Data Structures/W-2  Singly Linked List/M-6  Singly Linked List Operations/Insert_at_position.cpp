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
void InsertAtTail(node *&head, int data)
{
    node *n = new node(data);
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
void insert_pos(node *head, int pos, int v)
{
    node *newnode = new node(v);
    node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
void print_linked_list(node *head)
{
    cout << "Your Linked List :: ";
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << "-> ";
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
        cout << " 2: Insert at any Position.\n";
        cout << " 3: Print Linked List.\n";
        cout << " 4: Terminate.\n";

        int op;
        cin >> op;
        if (op == 1)
        {
            int data;
            cout << "Enter the data :: ";
            cin >> data;
            InsertAtTail(head, data);
        }
        else if (op == 2)
        {
            int pos, v;
            cout << "Enter postion and data :: ";
            cin >> pos >> v;
            insert_pos(head, pos, v);
        }
        else if (op == 3)
            print_linked_list(head);
        else if (op == 4)
            break;
    }
    return 0;
}