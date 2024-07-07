#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_position(Node *head, Node *tail, int pos, int val)
{
    Node *newNode = new Node(val);
    for (int i = 1; i < pos; i++)
    {
        head = head->next;
        if (head == NULL)
        {
            cout << "Invalid\n";
            return;
        }
    }
    newNode->next = head->next;
    head->next = newNode;
    newNode->prev = head;
    newNode->next->prev = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->next = NULL;
    newNode->prev = tail;
    tail = newNode;
}

int size(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void print_normal(Node *head)
{
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    cout << "R -> ";
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int queries;
    cin >> queries;
    while (queries--)
    {
        int x, v;
        cin >> x >> v;
        int sz = size(head);
        if (x == 0)
        {
            insert_head(head, tail, v);
            print_normal(head);
            print_reverse(tail);
        }
        else if (sz > x)
        {
            insert_at_position(head, tail, x, v);
            print_normal(head);
            print_reverse(tail);
        }
        else if (sz == x)
        {
            insert_tail(head, tail, v);
            print_normal(head);
            print_reverse(tail);
        }
        else
        {
            cout << "Invalid\n";
        }
    }
    return 0;
}