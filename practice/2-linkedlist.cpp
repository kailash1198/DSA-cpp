#include <iostream>
using namespace std;
// Singly Linked list insertion practice :
// 1. Insert in Begining
// 2. Insert in Last
// 3. Insert in specific position

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = nullptr;
    };
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

    // function for adding node in list
    void addNode(int nodeValue)
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

    // function for display List
    void displayList()
    {
        node *current = head;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }

    // function for insertion
    void insertion(int nodeValue, int pos)
    {
        if (pos == 1)
        {
            node *newNode = new node(nodeValue);
            node *current = head;
            newNode->next = current;
            current = current->next;
            head = newNode;
        }
        else
        {
            node *newNode = new node(nodeValue);
            node *current = head;

            for (int i = 1; i < pos - 1; i++)
            {
                current = current->next;
            }
            
           newNode->next= current->next;
           current->next = newNode;
        }
    }
};

int main()
{
    linkedList list_one;
    list_one.addNode(1);
    list_one.addNode(2);
    list_one.addNode(3);
    list_one.addNode(4);
    list_one.addNode(5);

    list_one.insertion(1, 1);
    list_one.insertion(20, 3);

    list_one.displayList();
    return 0;
}