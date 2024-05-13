#include <iostream>
using namespace std;

// node structure
class node
{
public:
    int data;
    node *next;
    node(int a)
    {
        data = a;
        next = nullptr;
    }
};

// function for create node list(+Append previous node)
node *head = nullptr;
node *tail = nullptr;

void nodeCreation(int nodeData)
{

    node *newNodeCreation = new node(nodeData);
    if (head == nullptr)
    {
        head = newNodeCreation;
        tail = newNodeCreation;
    }
    else
    {
        tail->next = newNodeCreation;
        tail = newNodeCreation;
    }
}

// function for insert node at specific position
void insertNode(int pos, int insertValue)
{
    node *insertNode = new node(insertValue);
    node *current = head;
    for (int i = 1; i < pos - 1; i++)
    {
        current = current->next;
    }

    insertNode->next = current->next;
    current->next = insertNode;
}

// function for displaay node list
void displayList()
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main(void)
{
    nodeCreation(10);
    nodeCreation(20);
    nodeCreation(30);
    nodeCreation(40);
    nodeCreation(50);
    nodeCreation(60);
    nodeCreation(70);
    insertNode(3, 5000);
    displayList();
}