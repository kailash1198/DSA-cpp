#include <iostream>
using namespace std;
// Singly Linked List Insertion Operation in Beginning
class node
{
public:
    int data;
    node *next;

public:
    node(int a)
    {
        data = a;
        next = NULL;
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
        head = NULL;
        tail = NULL;
    }

    void nodeCreation(int value)
    {
        node *newNode = new node(value);
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

    void listDisplay()
    {
        node *current = head;
        while (current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }

    void insertBegining(int insertData)
    {
        node *newInsertData = new node(insertData);

        newInsertData->next = head;
        head = newInsertData;
        
    }
};
int main(void)
{
    linkedList listOne;
    listOne.nodeCreation(10);
    listOne.nodeCreation(20);
    listOne.nodeCreation(30);
    listOne.nodeCreation(40);
    listOne.nodeCreation(50);

    listOne.insertBegining(100);
    listOne.insertBegining(200);
    listOne.insertBegining(300);
    listOne.insertBegining(400);
    listOne.insertBegining(500);
    listOne.insertBegining(600);
    listOne.insertBegining(636365);

    listOne.listDisplay();
}