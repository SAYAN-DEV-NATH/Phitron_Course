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
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    int mx = INT_MIN;
    int mn = INT_MAX;

    while (true)
    {
        int data;
        cin >> data;

        if (data == -1)
            break;

        if (data > mx)
            mx = data;
        if (data < mn)
            mn = data;

        insert_data(head, tail, data);
    }

    cout << mx - mn << endl;
    return 0;
}