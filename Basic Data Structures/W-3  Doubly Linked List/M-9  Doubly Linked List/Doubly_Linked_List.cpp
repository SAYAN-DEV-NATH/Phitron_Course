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

void insert_position(node *&head, int pos, int data)
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
    head->past = n;
    n->past = NULL;
    head = n;
}

void print_data(node *head)
{
    cout << "\n";
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
    cout << "NULL\n\n";
}

void delete_position(node *head, int pos)
{
    for (int i = 1; i <= pos - 1; i++)
    {
        head = head->next;
        if (head == NULL)
        {
            cout << "Invalid Index\n";
            return;
        }
    }
    node *deleteNode = head->next;
    head->next = deleteNode->next;
    delete deleteNode;
    head->next->past = head;
}

void delete_tail(node *&tail)
{
    node *deleteNode = tail;
    tail = tail->past;
    delete deleteNode;
    tail->next = NULL;
}

void delete_head(node *&head)
{
    node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->past = NULL;
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
    node *head = NULL;
    node *tail = NULL;

    int data, pos, op;
    while (true)
    {
        cout << "1-->Insert Head\n";
        cout << "2-->Insert At Position\n";
        cout << "3-->Insert Tail\n";
        cout << "4-->Delete Head\n";
        cout << "5-->Delete At Position\n";
        cout << "6-->Delete Tail\n";
        cout << "7-->Terninate\n";

        cin >> op;

        if (op == 1)
        {
            cin >> data;
            insert_head(head, tail, data);
        }
        else if (op == 2)
        {
            cin >> pos >> data;

            if (pos >= size(head))
                cout << "Invalid Index\n";
            else
                insert_position(head, pos, data);
        }
        else if (op == 3)
        {
            cin >> data;
            insert_tail(head, tail, data);
        }
        else if (op == 4)
        {
            delete_head(head);
        }
        else if (op == 5)
        {
            cin >> pos;
            if (pos >= size(head))
                cout << "Invalid Index\n";
            else
                delete_position(head, pos);
        }
        else if (op == 6)
            delete_tail(tail);
        else if (op == 7)
            break;
        else
            cout << "Invelid Index\n";

        print_data(head);
        print_reverse(tail);
    }
    return 0;
}