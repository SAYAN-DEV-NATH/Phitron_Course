#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void InsertAtTail(node *&head, int data)
{
    node *n = new node(data);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = n;
}
void result(node *head, int n)
{
    node *tmp = head;
    for (int i = 1; i < n; i++)
    {
        if (tmp->data > tmp->next->data)
        {
            cout << "NO";
            return;
        }
        tmp = tmp->next;
    }
    cout << "YES\n";
}
int main()
{
    int data, cnt = 0;
    node *head = NULL;
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;
        else
        {
            cnt++;
            InsertAtTail(head, data);
        }
    }
    result(head, cnt);
    return 0;
}