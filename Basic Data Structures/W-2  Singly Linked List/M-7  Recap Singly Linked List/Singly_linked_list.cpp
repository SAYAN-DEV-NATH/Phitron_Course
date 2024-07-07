#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int Data;
    Node *Next;
    Node(int Data)
    {
        this->Data = Data;
        this->Next = NULL;
    }
};

void print_list(Node *Head)
{
    Node *tmp = Head;

    cout << "\n";
    while (tmp != NULL)
    {
        cout << tmp->Data << " -> ";
        tmp = tmp->Next;
    }
    cout << "NULL\n\n";
}

int main()
{
    Node *Head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    Head->Next = a;
    a->Next = b;
    b->Next = c;
    c->Next = d;

    print_list(Head);
    return 0;
}