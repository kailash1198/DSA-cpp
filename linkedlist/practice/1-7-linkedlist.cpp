#include <iostream>
using namespace std;
// Node is building block of linked list.
// collection of nodes is called linked list.

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

class nodeCreate
{
private:
    node *head;
    node *tail;

public:
    nodeCreate()
    {
        head = NULL;
        tail = NULL;
    }

    void nodeAdding(int num)
    {
        node *newNode = new node(num);
        if (head == NULL)
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

    void displayFunc()
    {
        node *current = head;
        while (current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
};

int main(void)
{
    nodeCreate nodeListOne;
    nodeListOne.nodeAdding(10);
    nodeListOne.nodeAdding(20);
    nodeListOne.displayFunc();
}