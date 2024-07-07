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
void display(node *head, int n)
{
    node *tmp = head;
    node *tmp1 = head->next;

    for (int i = 1; i < n; i++)
    {
        int a = tmp->data;
        for (int j = i + 1; j <= n; j++)
        {
            int b = tmp1->data;
            if (a == b)
            {
                cout << "YES";
                return;
            }
            tmp1 = tmp1->next;
        }
        tmp = tmp->next;
        tmp1 = tmp->next;
    }
    cout << "NO\n";
}
int main()
{
    int data, cnt = 0;
    node *head = NULL;
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
    display(head, cnt);
    return 0;
}