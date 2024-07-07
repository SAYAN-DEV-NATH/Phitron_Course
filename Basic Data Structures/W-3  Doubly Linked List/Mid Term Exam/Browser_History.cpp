#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    string data;
    node *next;
    node *prev;
    node(string data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(node *&head, node *&tail, string data)
{
    node *newNode = new node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void queries(node *&head, node *&tail, int q)
{
    node *current = head;
    while (q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string address;
            cin >> address;
            node *found = head;

            while (found != NULL && found->next != NULL)
            {
                if (found->data == address)
                    break;
                found = found->next;
            }

            if (found->data == address)
            {
                current = found;
                cout << current->data << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (current && current->next)
            {
                current = current->next;
                cout << current->data << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (current && current->prev)
            {
                current = current->prev;
                cout << current->data << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    string data;
    while (true)
    {
        cin >> data;
        if (data == "end")
            break;
        else
            insert_tail(head, tail, data);
    }
    int q;
    cin >> q;
    queries(head, tail, q);

    return 0;
}