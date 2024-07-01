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

    void displayList()
    {
        node *current = head;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }

    void insertStarting(int nodeValue)
    {
        node *newNode = new node(nodeValue);
        newNode->next = head;
        head = head->next;
        head = newNode;
    }

    void insertLast(int nodeValue)
    {
        node *newNode = new node(nodeValue);
        tail->next = newNode;
        newNode->next = nullptr;
        tail = newNode;
    }
    void insertSpecificPos(int pos, int nodeValue)
    {
        node *newNode = new node(nodeValue);
        node *current = head;
        for (int i = 0; i < pos - 1; i++)
        {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;
        current = newNode;
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

    listOne.insertStarting(0);
    listOne.insertStarting(-1);

    listOne.insertLast(6);
    listOne.insertLast(7);

    listOne.insertSpecificPos(3, 500);

    listOne.displayList();

    return 0;
}