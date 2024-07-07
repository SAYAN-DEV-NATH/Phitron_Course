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

int main()
{
    node *head = NULL;
    node *tail = NULL;

    int data;
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;

        insert_data(head, tail, data);
    }

    int mx = INT_MIN;
    for (node *i = head; i != NULL; i = i->next)
    {
        if (i->data > mx)
            mx = i->data;
    }

    cout << mx << endl;

    return 0;
}