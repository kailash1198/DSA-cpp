#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
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

    void addNode(int value)
    {
        node *newNode = new node(value);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void showList()
    {
        node *current = head;
        while (current != nullptr)
        {
            cout << current->data << "   ";
            current = current->next;
        }
    }
};

int main()
{
    linkedList listOne;
    listOne.addNode(10);
    listOne.addNode(20);
    listOne.addNode(30);
    listOne.addNode(40);
    listOne.addNode(50);
    listOne.addNode(60);

    listOne.showList();

    return 0;
}