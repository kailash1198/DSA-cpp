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

    void addingNode(int dataValue)
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

    void lastNodeDeletion()
    {
        node *current = tail;
        tail=tail->prev;
        tail->next=nullptr;
        delete current;
    }
};

int main()
{
    doublyList listOne;
    listOne.addingNode(1);
    listOne.addingNode(2);
    listOne.addingNode(3);
    listOne.addingNode(4);
    listOne.addingNode(5);
    listOne.addingNode(6);
    listOne.addingNode(7);
    listOne.lastNodeDeletion();
    listOne.displayList();
    return 0;
}