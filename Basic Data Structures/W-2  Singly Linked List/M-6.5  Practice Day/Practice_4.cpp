#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void insert_tail(node *&head, int data)
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
void display(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << "\n";
}
bool insert_head(node *&head, int data)
{
    node *n = new node(data);
    n->next = head;
    head = n;
    return true;
}
bool insert_at_position(node *head, int pos, int data)
{
    node *n = new node(data);
    node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid\n";
            return false;
        }
    }
    n->next = tmp->next;
    tmp->next = n;
    return true;
}
int main()
{
    int data;
    node *head = NULL;
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;
        else
            insert_tail(head, data);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int pos, value;
        cin >> pos >> value;

        bool flag;

        if (pos == 0)
            flag = insert_head(head, value);
        else
            flag = insert_at_position(head, pos, value);

        if (flag)
            display(head);
    }
    return 0;
}