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
    node *newnode = new node(data);
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
void printLinkedList(node *head)
{
    node *tmp = head;
    cout << "\n";
    while (tmp != NULL)
    {
        cout << tmp->data << "-> ";
        tmp = tmp->next;
    }
    cout << "NULL\n"
         << endl;
}
int main()
{
    node *head = NULL;

    // InsertAtTail(head, 1);
    // InsertAtTail(head, 2);
    // InsertAtTail(head, 3);
    // printLinkedList(head);

    while (true)
    {
        cout << " 1: Insert at Tail.\n";
        cout << " 2: Print Linked List.\n";
        cout << " 3: Terminate.\n";

        int op;
        cin >> op;
        if (op == 1)
        {
            int data;
            cout << "Enter any value :: ";
            cin >> data;
            InsertAtTail(head, data);
        }
        else if (op == 2)
            printLinkedList(head);
        else if (op == 3)
            break;
    }
    return 0;
}