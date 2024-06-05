#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int nodeValue)
    {
        data = nodeValue;
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

    void deletion(int pos)
    {
        node *current = head;
        node* previousNode = nullptr;

        for (int i = 0; i < pos - 1; i++)
        {
            previousNode = current;
            current=current->next;
        }
        previousNode->next = current->next;
        delete current;
        
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

    listOne.deletion(2);
    listOne.displayList();
    return 0;
}