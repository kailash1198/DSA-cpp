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

// Linked list - Creation and Deletion + Displat list
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

    void addingNode(int nodeValue)
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

    void deleteLastNode()
    {
        node *temp = head;
        while(temp->next->next!=nullptr){
            temp = temp->next;
        }
       temp->next = nullptr;

    }

    void displayNode()
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
    linkedList list;
    list.addingNode(1);
    list.addingNode(2);
    list.addingNode(3);
    list.addingNode(4);
    list.addingNode(5);
    list.addingNode(6);

    list.deleteLastNode();
    list.deleteLastNode();
    list.displayNode();
}