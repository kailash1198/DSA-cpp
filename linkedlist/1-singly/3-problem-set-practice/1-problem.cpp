#include <iostream>

// Implementing a Singly Linked List: Write a class or structure to represent a singly linked list. Include methods/functions to:

// Insert a node at the beginning of the list.
// Insert a node at the end of the list.
// Insert a node after a given node.
// Delete a node by value.
// Traverse and print the list.

class node
{
public:
    int data;
    node *next;
    node(int data_value)
    {
        data = data_value;
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

    // function for add node
    void addNote(int data_value)
    {
        node *newNode = new node(data_value);
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

    // function for display list
    void displayList()
    {
        node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << std::endl;
            current = current->next;
        }
    }

    // function for insertion node at begining of the list
    void insertBegining(int node_value)
    {
        node *newNode = new node(node_value);
        newNode->next = head;
        head = newNode;
    }

    // function for insertion node at end of the list
    void insertionEnd(int node_value)
    {
        node *newNode = new node(node_value);

        tail->next = newNode;
        tail = newNode;
    }

    // function for insertion node after a given node
    void specificPos(int pos, int node_value)
    {
        node *newNode = new node(node_value);
        node *current = head;

        for (int i = 1; i < pos; i++)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    // function for delete node
    void deleteNode(int value)
    {
        node *current = head;
        node *prev = nullptr;

        while (current != nullptr)
        {
            if (current->data == value)
            {
                if (prev == nullptr)
                {
                    head = current->next;
                }
                else
                {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }
};

int main()
{
    linkedList myData;
    myData.addNote(1);
    myData.addNote(2);
    myData.addNote(3);
    myData.addNote(4);
    myData.addNote(5);

    myData.insertBegining(100);
    myData.insertionEnd(200);

    myData.specificPos(3, 500);
    myData.deleteNode(2);
    myData.displayList();

    return 0;
}