#include <iostream>
using namespace std;

// node blueprint
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

// linked list blueprint
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
    // add node function
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
    // function for delete node in specific position
    void nodeDeletion(int pos)
    {
        node *current = head;
        for (int i = 1; i < pos - 1; i++)
        {
            current = current->next;
        }

        // main logic for deletion
        node *temp = current->next;
        current->next = current->next->next;
        delete temp;
    }

    // function for display list
    void displayList()
    {
        node *current = head;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
};

int main(void)
{
    linkedList listOne;
    listOne.addNode(10);
    listOne.addNode(20);
    listOne.addNode(30);
    listOne.addNode(40);
    listOne.addNode(50);
    listOne.addNode(60);
    listOne.addNode(70);

    listOne.nodeDeletion(2);

    listOne.displayList();
}