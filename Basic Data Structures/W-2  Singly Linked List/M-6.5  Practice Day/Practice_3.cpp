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
void displayEven(node *head, int pos)
{
    node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->data << " " << tmp->next->data << endl;
}
void displayOdd(node *head, int pos)
{
    node *tmp = head;
    for (int i = 1; i < pos + 1; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->data << endl;
}
int main()
{
    int data, cnt = 0;
    node *head;
    while (1)
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
    if (cnt % 2 == 0)
    {
        cnt /= 2;
        displayEven(head, cnt);
    }
    else
    {
        cnt /= 2;
        displayOdd(head, cnt);
    }
    return 0;
}