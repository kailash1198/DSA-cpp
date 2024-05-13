#include <iostream>

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class doublyList
{
private:
    node *head;
    node *tail;

public:
    doublyList()
    {
        head = nullptr;
        tail = nullptr;
    }

    // function for adding node
    void addNode(int dataValue)
    {
        node *newNode = new node(dataValue);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // function for display node
    void displayNode()
    {
        node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << std::endl;
            current = current->next;
        }
    }

    // function for inseting node in Last in doubly linked list
    void insertingLast(int dataValue)
    {
        node *newNode = new node(dataValue);
        node *current = tail;

       current->next = newNode;
       newNode->prev = current;
       tail = newNode;
    }
};

int main()
{
    doublyList listOne;
    listOne.addNode(1);
    listOne.addNode(2);
    listOne.addNode(3);
    listOne.addNode(4);
    listOne.addNode(5);

    listOne.insertingLast(6);

    listOne.displayNode();
    return 0;
}