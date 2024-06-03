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
            head->next = head;
        }
        else
        {
            node *current = head;

            while (current->next != head)
            {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
            // head=newNode;
        }
    }

    void displayList()
    {
        node *current = head;
        do
        {
            /* code */
            cout << current->data << endl;
            current = current->next;
        } while (current != head);
    }

    void insertionNode(int pos, int nodeValue)
    {
        node *newNode = new node(nodeValue);
        node *current = head;

        for (int i = 0; i < pos - 1; i++)
        {
            current = current->next;
        }

        newNode->next = current->next;
        current->next =newNode;
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

    listOne.insertionNode(2, 10);

    listOne.displayList();
    return 0;
}