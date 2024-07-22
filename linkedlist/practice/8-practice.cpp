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

    void deletion(int index)
    {
        if (index == 1)
        {
            node *current = head;
            head = head->next;
            current = nullptr;
            delete current;
        }
        else
        {
            node *current = head;
            for (int i = 1; i < index-1; i++)
            {
                current = current->next;
            }
            current->next = current->next->next;
            current = current->next;
        }
    }
};

int main()
{
    linkedList myList;
    myList.addNode(1);
    myList.addNode(2);
    myList.addNode(3);
    myList.addNode(4);
    myList.addNode(5);

    // myList.deletion(1);
    myList.deletion(3);

    myList.displayList();

    return 0;
}