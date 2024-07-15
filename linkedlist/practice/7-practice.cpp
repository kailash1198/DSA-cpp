#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int dataValue)
    {
        data = dataValue;
        next = nullptr;
    }
};

class linkedList
{
private:
    node *head;

public:
    linkedList()
    {
        head = nullptr;
    }

    void addNode(int nodeValue)
    {
        node *newNode = new node(nodeValue);
        if (head == nullptr)
        {
            head = newNode;
            head->next = newNode;
        }
        else
        {
            node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void displayList()
    {
        node *current = head;
        do
        {
            cout << current->data << endl;
            current = current->next;
        } while (current != head);
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

    listOne.displayList();
    return 0;
}