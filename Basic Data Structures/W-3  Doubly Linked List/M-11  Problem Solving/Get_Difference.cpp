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

void insert_tail(node *&head, node *&tail, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    int mn = INT_MAX;
    int mx = INT_MIN;
    while (head != NULL)
    {
        if (head->val > mx)
        {
            mx = head->val;
        }
        if (head->val < mn)
            mn = head->val;
        head = head->next;
    }
    cout << mx - mn << endl;
    return 0;
}