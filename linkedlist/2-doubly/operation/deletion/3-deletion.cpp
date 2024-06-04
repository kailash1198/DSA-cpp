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

    void firstNodeDeletion()
    {
        node *current = head;
        current = current->next;
        head = current;
        delete current;
        current = nullptr;
    }

    void deletionLast()
    {
        node *current = head;
        while (current->next != tail)
        {
            current = current->next;
        }
        delete tail;
        tail = current;
        tail->next = nullptr;
        tail->prev = current;
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
    listOne.addingNode(8);
    listOne.firstNodeDeletion();

    listOne.deletionLast();
    listOne.displayList();
    return 0;
}