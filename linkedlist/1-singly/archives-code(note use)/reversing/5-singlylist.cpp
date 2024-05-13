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

// function for create node
node *head = nullptr;
node *tail = nullptr;

void nodeCreation(int nodeValue)
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
// function for inserting node in last of the list
void insertLast(int insertValue)
{
    node *insertNode = new node(insertValue);
    insertNode->next = tail->next;
    tail->next = insertNode;
}

// display node
void displayNodeList()
{
    node *current = head;
    while (current != nullptr)
    {
        cout << current->data << endl;
        current = current->next;
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

    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);
    insertLast(9000);

    displayNodeList();
}