#include <iostream>
class node
{
public:
    int data;
    node *next;
    node(int data_value)
    {
        data = data_value;
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

    void addNote(int node_value)
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

    void displayNode()
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
    circularList list;
    list.addNote(1);
    list.addNote(2);
    list.addNote(3);
    list.addNote(4);
    list.addNote(5);
    list.addNote(6);

    list.displayNode();

    return 0;
}