#include <iostream>
using namespace std;
// Insertion in specific position in doubly linked list
// Node structure class
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

// Linked list class
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

    // function for display list
    void displayList()
    {
        node *current = head;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }

    // function for inseting node specific position
    void insertionSpecific(int pos, int dataValue)
    {
        node *newNode = new node(dataValue);
        node *current = head;
        for (int i = 1; i < pos - 1; i++)
        {
            current = current->next;
        }
        // Main logic
        newNode->next = current->next;
        newNode->prev = current;

        current->next->prev = newNode;
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
    listOne.addNode(5);
    listOne.addNode(6);
    listOne.addNode(7);

    listOne.insertionSpecific(5, 10);

    listOne.displayList();

    return 0;
}