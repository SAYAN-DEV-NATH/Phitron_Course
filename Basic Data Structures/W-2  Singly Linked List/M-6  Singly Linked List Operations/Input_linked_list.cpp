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
    while (tmp != NULL)
    {
        cout << tmp->data << " ->";
        tmp = tmp->next;
    }
    cout << "\n\n";
}
int main()
{
    int data;
    node *head = NULL;
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;
        InsertAtTail(head, data);
    }
    Display(head);
    return 0;
}