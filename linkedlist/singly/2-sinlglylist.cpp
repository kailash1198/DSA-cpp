#include <iostream>
using namespace std;
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
    // function - for creating node
    void addingNode(int nodeData)
    {
        node *newNode = new node(nodeData);
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

    // function - for inserting node at specific position
    void insertNodeSpecificPos(int pos, int insertData)
    {
        node *insertNewNode = new node(insertData);
        node *current;
        current = head;

        for (int i = 0; i < pos && current != nullptr; i++)
        {
            if (current)
            {
                current = current->next;
            }
        }
    }
    // Function - for display linked list
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
    listOne.addingNode(100);
    listOne.addingNode(200);
    listOne.addingNode(300);
    listOne.addingNode(400);
    listOne.addingNode(500);
    listOne.insertNodeSpecificPos(2, 900);
    listOne.displayList();
}