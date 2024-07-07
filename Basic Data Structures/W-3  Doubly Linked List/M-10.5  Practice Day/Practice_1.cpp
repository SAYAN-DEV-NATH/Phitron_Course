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
    n->past = tail;
    n->next = NULL;
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
    int data;
    node *head = NULL;
    node *tail = NULL;
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;
        insert_data(head, tail, data);
    }

    node *head1 = NULL;
    node *tail1 = NULL;
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;
        insert_data(head1, tail1, data);
    }

    if (size(head1) != size(head))
        cout << "NO\n";
    else
    {
        bool flag = true;
        for (int i = 1; i < size(head); i++)
        {
            if (head->data != head1->data)
            {
                flag = false;
                break;
            }
            head1 = head1->next;
            head = head->next;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}