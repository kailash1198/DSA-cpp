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

    void displayList()
    {
        node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << std::endl;
            current = current->next;
        }
    }

    void insertingNode(int pos, int dataValue)
    {
        node *newNode = new node(dataValue);
        node *current = head;
        for (int i = 1; i < pos - 1; i++)
        {
            current = current->next;
        }
        newNode->next = current->next;
        newNode->prev = current;
        
        current->next->prev = newNode;
        current->next = newNode;
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
    listOne.addNode(6);
    listOne.addNode(7);
    listOne.addNode(8);
    listOne.insertingNode(3, 10);
    listOne.displayList();

    return 0;
}