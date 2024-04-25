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

    void insertionNode(int pos, int nodeValue)
    {
        if (pos == 1)
        {
            node *newNode = new node(nodeValue);
            node *current = head;

            newNode->next = current;
            current = current->next;

            head = newNode;
        }else{
            
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

    listOne.insertionNode(1, 10);

    listOne.displayList();
    return 0;
}