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

void print_mid(node *head, int cnt)
{
    node *tmp = head;
    int pos = cnt / 2;
    if (cnt % 2 == 0)
    {
        for (int i = 1; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->data << " " << tmp->next->data << endl;
        return;
    }
    else
    {
        for (int i = 1; i <= pos; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->data << endl;
        return;
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

    print_mid(head, cnt);

    return 0;
}