#include <iostream>
using namespace std;

// Node structure
class node
{
public:
    int data;
    node *next;
    node(int a)
    {
        data = a;
        next = NULL;
    }
};

// Linkedlist of Nodes
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

    // method - adding data to linked list
    void addingData(int data)
    {
        node *newNode = new node(data);
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

    // method - display list

    void displayList()
    {
        node *current = head;
        while (current != NULL)
        {
            /* code */
            cout << current->data << " ";
            current = current->next;
        }
    }

    // method for Inserting in begining
    void insertingBegining(int newData)
    {
        node *insertNewNode = new node(newData);
        if (head == NULL)
        {
            insertNewNode->next = head;
        }
        else
        {
            
        }
    }
};

int main(void)
{
    linkedList listOne;
    // Linked List data assign to method
    listOne.addingData(10);
    listOne.addingData(20);
    listOne.addingData(30);
    listOne.addingData(40);
    listOne.addingData(50);
    // Display linked list using display method
    listOne.displayList();
}