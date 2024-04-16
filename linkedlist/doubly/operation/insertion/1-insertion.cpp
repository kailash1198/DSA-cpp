#include <iostream>
using namespace std;

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
        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    void insertionStarting(int dataValue)
    {
        node *newNode = new node(dataValue);

        node *temp = head;

        newNode->next = temp;
        temp->prev = temp;
        head = newNode;
    }

    void insertionLast(int dataValue)
    {
        node *newNode = new node(dataValue);

        node *current = tail;

        tail->next = newNode;
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
    listOne.addNode(6);
    listOne.addNode(7);

    listOne.insertionStarting(0);
    listOne.insertionLast(8);
    listOne.insertionLast(9);

    listOne.displayList();

    return 0;
}