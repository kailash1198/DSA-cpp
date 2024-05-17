#include <iostream>
// insertion in starting
class node
{
public:
    int data;
    node *next;
    node(int node_value)
    {
        data = node_value;
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

    void addNode(int node_value)
    {
        node *newNode = new node(node_value);
        if (head == nullptr)
        {
            head = newNode;
            head->next = newNode;
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
            head = newNode;
        }
    }

    void display()
    {
        node *current = head;
        do
        {
            std::cout << current->data << std::endl;
            current = current->next;
        } while (current != head);
    }

    void startingInsert(int node_value)
    {
        node *newNode = new node(node_value);
        node *current = head;

        while (current->next != head)
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = head;
        head = newNode;
    }
};

int main()
{
    linkedList listOne;
    listOne.addNode(5);
    listOne.addNode(4);
    listOne.addNode(3);
    listOne.addNode(2);
    listOne.addNode(1);
    listOne.startingInsert(10);
    listOne.startingInsert(11);
    listOne.display();

    return 0;
}