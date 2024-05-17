#include <iostream>
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

class circularList
{
private:
    node *head;

public:
    circularList()
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

    void displayList()
    {
        node *current = head;
        do
        {
            std::cout << current->data << std::endl;
            current = current->next;
        } while (current != head);
    }
};

int main()
{
    circularList list_one;
    list_one.addNode(1);
    list_one.addNode(2);
    list_one.addNode(3);
    list_one.addNode(4);
    list_one.addNode(5);

    list_one.displayList();

    return 0;
}