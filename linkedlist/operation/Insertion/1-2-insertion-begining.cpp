#include <iostream>
using namespace std;
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
            tail = newNode;
        }
    }

    void displayLinkedList()
    {
        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    void insertingNodeStarting(int nodeValue)
    {
        node *newNode = new node(nodeValue);
        newNode->next = head;
        head = newNode;
    }

    void insertingNodeLast(int nodeValue){
        node *newNode = new node(nodeValue);
        tail->next = newNode;
        tail = newNode;
    }
};

int main(void)
{
    linkedList listOne;
    listOne.addingNode(10);
    listOne.addingNode(20);
    listOne.addingNode(30);
    listOne.addingNode(40);
    listOne.addingNode(50);
    listOne.addingNode(60);

    listOne.insertingNodeStarting(5);
    listOne.insertingNodeStarting(1);

    listOne.insertingNodeLast(100);
    listOne.insertingNodeLast(200);
    listOne.insertingNodeLast(300);

    listOne.displayLinkedList();
}