#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int nodeValue)
    {
        data = nodeValue;
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

    void displayList()
    {
        node *current = head;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }

    void deletionFirst()
    {
        node *current = head;
        head = current->next;
        current = nullptr;
        delete current;
    }

    void deletionLast()
    {
        node *current = head;
        while(current->next!=tail){
            current=current->next;
        }

        delete tail;
        tail = current;
        tail->next = nullptr;
       
    }
};

int main()
{
    linkedList listOne;
    listOne.addNode(1);
    listOne.addNode(2);
    listOne.addNode(3);
    listOne.addNode(4);
    listOne.addNode(5);

    listOne.deletionFirst();
    listOne.deletionLast();

    listOne.displayList();

    return 0;
}