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

    void addNode(int num)
    {
        node *newNode = new node(num);
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

    void lastInsertion(int newValue)
    {
        node *insertNode = new node(newValue);;
        node *lastNode = tail;
        lastNode->next = insertNode;
        tail = insertNode;
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
};

int main(void)
{
    linkedList list;
    list.addNode(10);
    list.addNode(20);
    list.addNode(30);
    list.addNode(40);

    list.lastInsertion(50);

    list.displayList();
}