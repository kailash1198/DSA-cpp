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
        next = NULL;
    }
};

class nodeCreation
{
private:
    node *head;
    node *tail;

public:
    nodeCreation()
    {
        head = NULL;
        tail = NULL;
    }

    void nodeDataAssign(int num)
    {
        node *newNode = new node(num); //allocate memory for one node as per node structure
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

    void display()
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
    nodeCreation nodeList;
    nodeList.nodeDataAssign(10);
    nodeList.nodeDataAssign(20);
    nodeList.nodeDataAssign(30);
    nodeList.display();
}