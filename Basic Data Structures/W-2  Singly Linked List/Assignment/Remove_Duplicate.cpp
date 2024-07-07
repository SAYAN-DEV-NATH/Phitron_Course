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

void print_data(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    while (true)
    {
        int data;
        cin >> data;
        if (data == -1)
            break;
        insert_data(head, tail, data);
    }

    for (node *i = head; i != NULL; i = i->next)
    {
        node *tmp = i;
        while (tmp->next != NULL)
        {
            if (i->data == tmp->next->data)
            {
                node *deleteNode = tmp->next;
                tmp->next = deleteNode->next;
                delete deleteNode;
            }
            else
                tmp = tmp->next;
        }
    }

    print_data(head);
    return 0;
}