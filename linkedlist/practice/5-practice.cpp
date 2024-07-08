#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int dataValue)
    {
        data = dataValue;
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
            tail = newNode;
        }
    }

    void displayNode()
    {
        node *current = head;
        while (current)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
};

int main()
{
    linkedList myList;
    myList.addNode(10);
    myList.addNode(20);
    myList.addNode(30);
    myList.addNode(40);
    myList.addNode(50);

    myList.displayNode();

    return 0;
}