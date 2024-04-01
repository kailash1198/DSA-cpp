#include <iostream>
using namespace std;
// Node structure for creating linked list structure
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = nullptr;
    }
};
// Linked list program
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

    void addNode(int value)
    {
        node *newNode = new node(value);
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
            cout << current->data << " ";
            current = current->next;
        }
    }

    void deleteNodeStarting()
    {
        node *current = head;
        current = current->next;
        head = current;
    }

 
};

int main(void)
{
    linkedList listOne;
    listOne.addNode(10);
    listOne.addNode(20);
    listOne.addNode(30);
    listOne.addNode(40);
    listOne.addNode(50);
    listOne.deleteNodeStarting();
    listOne.displayList();
}