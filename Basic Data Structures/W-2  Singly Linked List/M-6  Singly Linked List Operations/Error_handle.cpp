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

void InsertAtPosition(node *&head, int pos, int data)
{
    node *n = new node(data);
    node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL) // Error Handle
        {
            cout << "\n\nInvalid Index\n\n";
            return;
        }
    }
    n->next = tmp->next;
    tmp->next = n;
}
void InsertAtHead(node *&head, int data)
{
    node *n = new node(data);
    n->next = head;
    head = n;
}
void deletePosition(node *head, int pos)
{
    node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL) // Error Handle
        {
            cout << "\n\nInvalid Index\n\n";
            return;
        }
    }
    node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}
void deleteHead(node *&head)
{
    node *deletenode = head;
    head = head->next;
    delete deletenode;
}
void printLinkedList(node *head)
{
    node *tmp = head;
    cout << "\n";
    while (tmp != NULL)
    {
        cout << tmp->data << "->";
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
        cout << "--> 1: Insert at Tail.\n";         // done
        cout << "--> 4: Insert at any Position.\n"; // done
        cout << "--> 5: Delete any Position.\n";    // done
        cout << "--> 2: Print Linked List.\n";      // done
        cout << "--> 3: Terminate.\n";              // done

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
        {
            printLinkedList(head);
        }
        else if (op == 3)
            break;
        else if (op == 4)
        {
            int pos, data;
            cout << "Enter Position and Data :: ";
            cin >> pos >> data;
            if (pos == 1)
            {
                InsertAtHead(head, data);
            }
            else
            {
                InsertAtPosition(head, pos, data);
            }
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter delete position :: ";
            cin >> pos;
            if (pos == 1)
                deleteHead(head);
            else
                deletePosition(head, pos);
        }
    }
    return 0;
}