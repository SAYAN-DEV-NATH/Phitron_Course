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
    int test;
    cin >> test;
    while (test--)
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

        int x;
        cin >> x;
        bool flag = false;

        node *tmp = head;
        int pos = 0;
        while (tmp != NULL)
        {
            if (tmp->data == x)
            {
                flag = true;
                break;
            }
            tmp = tmp->next;
            pos++;
        }

        if (flag)
            cout << pos << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}