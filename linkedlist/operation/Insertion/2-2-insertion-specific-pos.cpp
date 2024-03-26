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
            tail = newNode;
        }
    }

    void insertNode(int pos, int dataValue)
    {
        node *newNode = new node(dataValue);

        node *current = head;
        for (int i = 1; i < pos - 1; i++)
        {
            current = current->next;
        }

        // logic for update new value
        newNode->next = current->next;
        current->next = newNode;
    }

    void displayNode()
    {
        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main()
{
    linkedList listOne;
    listOne.addNode(10);
    listOne.addNode(20);
    listOne.addNode(30);
    listOne.addNode(40);

    listOne.insertNode(3, 100);

    listOne.displayNode();
}