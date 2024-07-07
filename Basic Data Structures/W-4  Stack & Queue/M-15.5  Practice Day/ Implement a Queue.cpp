// #include <bits/stdc++.h>
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// class Queue
// {
// public:
//     Node *head = NULL;
//     Node *tail = NULL;

//     int sz = 0;
//     Queue()
//     {
//     }

//     bool isEmpty()
//     {
//         return sz == 0;
//     }

//     void enqueue(int data)
//     {
//         sz++;
//         Node *newNode = new Node(data);
//         if (head == NULL)
//         {
//             head = newNode;
//             tail = newNode;
//         }
//         else
//         {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     int dequeue()
//     {
//         if (sz > 0)
//         {
//             sz--;
//             int x = head->data;
//             Node *del = head;
//             if (del->next == NULL)
//             {
//                 head = NULL;
//                 tail = NULL;
//             }
//             else
//             {
//                 head = head->next;
//             }
//             delete del;
//             return x;
//         }
//         else
//         {
//             return -1;
//         }
//     }

//     int front()
//     {
//         if (sz > 0)
//         {
//             return head->data;
//         }
//         else
//         {
//             return -1;
//         }
//     }
// };s