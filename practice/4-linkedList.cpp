#include <iostream>
using namespace std;
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

    void displayNode()
    {
        node *current = head;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }

    void insertion(int pos, int nodeValue)
    {
        node *current = head;
        node *newNode = new node(nodeValue);

        for (int i = 0; i < pos - 1; i++)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next->prev = newNode;
        current->next = newNode;
        newNode->prev = current;
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

    listOne.insertion(2, 100);

    listOne.displayNode();
    return 0;
}