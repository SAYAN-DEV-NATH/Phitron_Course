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

    int data, cnt1 = 0, cnt2 = 0;
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;

        cnt1++;
        insert_data(head, tail, data);
    }

    while (true)
    {
        cin >> data;
        if (data == -1)
            break;
        cnt2++;
        insert_data(head, tail, data);
    }

    if (cnt1 == cnt2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}