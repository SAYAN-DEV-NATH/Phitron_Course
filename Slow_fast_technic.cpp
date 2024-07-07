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
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    int data, cnt = 0;
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;
        cnt++;
        insert_data(head, tail, data);
    }

    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (cnt % 2 == 0)
        cout << slow->data << " " << slow->next->data << endl;
    else
        cout << slow->data << endl;

    print_data(head);
    head = NULL;
    print_data(head);
    return 0;
}
