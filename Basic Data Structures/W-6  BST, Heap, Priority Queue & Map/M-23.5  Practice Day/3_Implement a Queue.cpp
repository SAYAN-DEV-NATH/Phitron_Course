/*

#include <bits/stdc++.h> 
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class Queue {
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz=0;
    Queue() {}

    bool isEmpty() {
        return sz==0;
    }

    void enqueue(int data) {
        sz++;
        Node *n = new Node(data);
        if(head == NULL) {
            head = n;
            tail = n;
        }
        else {
            tail->next = n;
            tail = n;
        }
    }

    int dequeue() {
        if(sz>0){
            sz--;
            Node *del = head;
            head = del->next;
            int x = del->data;
            delete del;
            return x;
        }
        else return -1;
    }

    int front() {
       if(sz>0) return head->data;
       else return -1;
    }
}; 

*/