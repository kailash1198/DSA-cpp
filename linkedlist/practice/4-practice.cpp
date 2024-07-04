#include <iostream>
using namespace std;
// Node structure
class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int nodeValue)
    {
        data = nodeValue;
        prev = nullptr;
        next = nullptr;
    }
};

// Node list
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

    void addNode(int nodeValue)
    {
        node *newNode = new node(nodeValue);
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

    // forward direction traversing
    void displayList()
    {
        node *current = head;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
    // Backward direction traversing
    void displayBackward()
    {
        node *current = tail;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->prev;
        }
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

    // listOne.displayList();

    listOne.displayBackward();

    return 0;
}