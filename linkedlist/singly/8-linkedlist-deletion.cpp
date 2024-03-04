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

    void deletetNode(int pos)
    {
        node *temp = head;
        for (int i = 1; i < pos - 1; i++)
        {

            temp = temp->next;
        }

        temp->next = temp->next->next;
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

    list.deletetNode(2);

    list.displayNode();
}