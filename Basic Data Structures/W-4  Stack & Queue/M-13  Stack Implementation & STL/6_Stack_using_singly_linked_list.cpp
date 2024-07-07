#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Stack class using a linked list
class Stack
{
private:
    Node *top; // Pointer to the top of the stack

public:
    Stack() : top(nullptr) {}

    // Function to push an element onto the stack
    void push(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    // Function to pop an element from the stack
    void pop()
    {
        if (isEmpty())
        {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
            return;
        }

        Node *temp = top;
        top = top->next;
        delete temp;
    }

    // Function to get the top element of the stack
    int peek()
    {
        if (isEmpty())
        {
            std::cerr << "Stack is empty. Cannot peek." << std::endl;
            exit(EXIT_FAILURE);
        }

        return top->data;
    }

    // Function to check if the stack is empty
    bool isEmpty()
    {
        return top == nullptr;
    }
};

int main()
{
    Stack myStack;

    // Pushing elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Displaying the top element
    std::cout << "Top element: " << myStack.peek() << std::endl;

    // Popping elements from the stack
    myStack.pop();
    myStack.pop();

    // Displaying the top element after popping
    std::cout << "Top element after popping: " << myStack.peek() << std::endl;

    return 0;
}
