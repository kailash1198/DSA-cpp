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

    void addNode(int node_value)
    {
        node *newNode = new node(node_value);
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

    void displayList()
    {
        node *current = head;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }

    void firstNodeDeletion()
    {
        node *current = head;
        current = current->next;
        head = current;
    }
};

int main(void)
{
    linkedList list_One;
    list_One.addNode(10);
    list_One.addNode(20);
    list_One.addNode(30);
    list_One.addNode(40);
    list_One.addNode(50);
    list_One.firstNodeDeletion();
    list_One.firstNodeDeletion();
    list_One.displayList();
}