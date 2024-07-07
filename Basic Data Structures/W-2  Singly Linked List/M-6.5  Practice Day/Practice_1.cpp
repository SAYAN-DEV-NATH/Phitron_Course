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
void Display(node *head)
{
    node *tmp = head;
    cout << "\n\nMy Linked List is :: ";
    while (tmp != NULL)
    {
        cout << tmp->data << "->";
        tmp = tmp->next;
    }
    cout << "NULL\n\n";
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
            InsertAtTail(head, data);
            cnt++;
        }
    }
    // Display(head);
    // cout << "My Linked List Size is :: " << cnt << endl;
    cout << cnt << endl;
    return 0;
}