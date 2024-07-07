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

bool palindrome(node *head, node *tail)
{
    node *i = head;
    node *j = tail;
    while (i != j && i->past != j)
    {
        if (i->data != j->data)
        {
            return false;
        }
        i = i->next;
        j = j->past;
    }
    return true;
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
    if (palindrome(head, tail))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}