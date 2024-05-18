#include <iostream>
class node
{
public:
    int data;
    node *next;
    node(int node_value)
    {
        data = node_value;
        next = nullptr;
    }
};

class linkedList
{
private:
    node *head;
    node *tail;

public:
    linkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void addNode(int node_value)
    {
        node *newNode = new node(node_value);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void displayList()
    {
        node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << std::endl;
            current = current->next;
        }
    }

    void insertionLast(int node_value)
    {
        node *newNode = new node(node_value);
        tail->next = newNode;
        tail = newNode;
    }
};

int main()
{
    linkedList listOne;
    listOne.addNode(1);
    listOne.addNode(2);
    listOne.addNode(3);
    listOne.addNode(4);

    listOne.insertionLast(10);
    listOne.insertionLast(11);
    listOne.displayList();

    return 0;
}