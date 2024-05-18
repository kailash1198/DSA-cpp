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

    void insertionSpecific(int pos, int node_value)
    {
        node *newNode = new node(node_value);
        node *current = head;

        for (int i = 0; i < pos - 1; i++)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
};

int main()
{
    linkedList listOne;
    listOne.addNode(1);
    listOne.addNode(2);
    listOne.addNode(3);
    listOne.addNode(4);
    listOne.insertionSpecific(3, 10);
    listOne.insertionSpecific(4, 11);
    listOne.displayList();

    return 0;
}