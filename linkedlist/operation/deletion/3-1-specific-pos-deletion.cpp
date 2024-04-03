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

// linked list class
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
    // function for delete node
    void deleteNode(int pos)
    {
        node *current = head;
        node *temp;

        for (int i = 1; i < pos - 1; i++)
        {
            current = current->next;
        }

        temp = current->next;
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
    listOne.addNode(1);
    listOne.addNode(2);
    listOne.addNode(3);
    listOne.addNode(4);
    listOne.addNode(5);
    listOne.addNode(6);
    listOne.addNode(7);
    listOne.addNode(8);

    listOne.deleteNode(5);
    
    listOne.displayList();
}