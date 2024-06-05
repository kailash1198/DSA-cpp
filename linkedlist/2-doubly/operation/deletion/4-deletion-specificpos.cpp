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
            newNode->prev = tail;
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

    void deletion(int pos)
    {
        // check list empty or not
        if (pos <= 0 || head == nullptr)
        {
            cout << "List empty" << endl;
        }

        node *current = head;
        node *prevNode = nullptr;
        // delete head node if pos==1
        if (pos == 1)
        {
            head = current->next;
            if (head != nullptr)
            {
                head->prev = nullptr;
            }
            else
            {
                tail = nullptr;
            }
            delete current;
            return;
        }

        // delete specific pos
        for (int i = 0; i < pos - 1; i++)
        {
            current = current->next;
        }

        if (current->next == nullptr)
        {
            tail = current->prev;
            if (tail != nullptr)
            {
                tail->next = nullptr;
            }
            else
            {
                head = nullptr;
            }
            delete current;
            return;
        }

        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
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
    listOne.addNode(6);

    listOne.deletion(3);

    listOne.displayList();

    return 0;
}