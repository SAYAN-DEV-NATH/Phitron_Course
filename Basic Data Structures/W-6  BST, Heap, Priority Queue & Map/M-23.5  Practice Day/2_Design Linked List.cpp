#include <list>

class MyLinkedList
{
private:
    std::list<int> linkedList;

public:
    MyLinkedList()
    {
        // No need to initialize anything, as the list is dynamic.
    }

    int get(int index)
    {
        if (index < 0 || index >= linkedList.size())
        {
            return -1;
        }

        auto it = linkedList.begin();
        std::advance(it, index);
        return *it;
    }

    void addAtHead(int val)
    {
        linkedList.push_front(val);
    }

    void addAtTail(int val)
    {
        linkedList.push_back(val);
    }

    void addAtIndex(int index, int val)
    {
        if (index < 0 || index > linkedList.size())
        {
            return;
        }

        auto it = linkedList.begin();
        std::advance(it, index);
        linkedList.insert(it, val);
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= linkedList.size())
        {
            return;
        }

        auto it = linkedList.begin();
        std::advance(it, index);
        linkedList.erase(it);
    }
};
