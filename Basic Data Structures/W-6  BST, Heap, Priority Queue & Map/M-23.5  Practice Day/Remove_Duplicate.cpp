#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert(node *&head, node *&tail, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
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
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert(head, tail, val);
    }
    node *tmp = head;

    for (node *i = head; i != NULL; i = i->next)
    {
        for (node *j = i; j->next != NULL;)
        {
            if (i->val == j->next->val)
            {
                node *del = j->next;
                j->next = del->next;
                delete del;
            }
            else
                j = j->next;
        }
    }

    print(head);
    return 0;
}
