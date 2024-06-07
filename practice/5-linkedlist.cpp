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

    void insertion(int pos, int nodeValue)
    {
        node *newNode = new node(nodeValue);
        node *current = head;
        if (pos == 1)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            for (int i = 1; i < pos - 1; i++)
            {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
            current = newNode;
        }
    }

    void deletion(int pos)
    {
        node *current = head;
        node *prev;
        if (pos == 1)
        {
            head = current->next;
            current = nullptr;
            delete current;
        }
        else
        {
            for (int i = 0; i < pos - 1; i++)
            {
                prev = current;
                current = current->next;
            }
            prev->next = current->next;
            delete current;
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
    listOne.addNode(6);
    listOne.addNode(7);

    listOne.insertion(3, 10);
    listOne.deletion(1);
    listOne.deletion(3);

    listOne.displayList();

    return 0;
}