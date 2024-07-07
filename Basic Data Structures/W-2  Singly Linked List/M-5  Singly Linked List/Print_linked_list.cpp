#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    /* cout << head->value << endl;             //Print Type-1 (better)
    cout << head->next->value << endl;
    cout << head->next->next->value << endl;
    cout << head->next->next->next->value << endl;
    cout << head->next->next->next->next->value << endl; */

    /* while (head != NULL)                     //Print Type-2  (wrong method)
    {
        cout << head->value << endl;
        head = head->next;
    } */

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
    return 0;
}