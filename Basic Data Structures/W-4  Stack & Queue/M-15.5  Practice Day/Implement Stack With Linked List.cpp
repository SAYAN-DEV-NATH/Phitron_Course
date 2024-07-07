// class Stack
// {

// public:
//     Node *head = NULL;
//     int sz = 0;
//     Stack()
//     {
//     }

//     int getSize()
//     {
//         return sz;
//     }

//     bool isEmpty()
//     {
//         return (sz == 0);
//     }

//     void push(int data)
//     {
//         sz++;
//         Node *newNode = new Node(data);
//         if (head == NULL)
//         {
//             head = newNode;
//         }
//         else
//         {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void pop()
//     {
//         if (sz > 0)
//         {
//             sz--;
//             Node *del = head;
//             head = head->next;
//             delete del;
//         }
//         else
//         {
//             return;
//         }
//     }

//     int getTop()
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
// };