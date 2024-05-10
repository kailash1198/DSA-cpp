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

    void displayList()
    {
        node *current = head;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }

    void insertionNode(int pos, int dataValue)
    {
        node *newNode = new node(dataValue);
        node *current = head;
        for (int i = 1; i < pos - 1; i++)
        {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    void deletionNode(int pos)
    {
        node *current = head;
        // delete first node
        if (pos == 1)
        {
            node *temp = head;
            head = temp->next;
            delete temp;
        }
        else
        {
            for (int i = 1; i < pos - 1; i++)
            {
                current = current->next;
            }
            node *temp = current->next;
            current->next = current->next->next;
            delete temp;
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

    listOne.insertionNode(3, 10);
    listOne.insertionNode(5, 20);

    listOne.deletionNode(3);

    listOne.displayList();

    return 0;
}