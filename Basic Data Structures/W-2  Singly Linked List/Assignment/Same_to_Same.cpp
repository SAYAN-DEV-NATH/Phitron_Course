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

    node *head1 = NULL;
    node *tail1 = NULL;

    int sz1 = 0, sz2 = 0;
    while (true)
    {
        int data;
        cin >> data;

        if (data == -1)
            break;
        sz1++;
        insert_data(head1, tail1, data);
    }

    node *head2 = NULL;
    node *tail2 = NULL;
    while (true)
    {
        int data;
        cin >> data;

        if (data == -1)
            break;
        sz2++;
        insert_data(head2, tail2, data);
    }

    bool flag = true;
    if (sz1 == sz2)
    {
        for (int i = 1; i <= sz1; i++)
        {
            if (head1->data != head2->data)
            {
                flag = false;
                break;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    else
    {
        cout << "NO\n";
        return 0;
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}