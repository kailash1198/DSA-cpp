#include <iostream>

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int node_value)
    {
        data = node_value;
        next = nullptr;
        prev = nullptr;
    }
};

class doublyList
{
private:
    node *head;
    node *tail;

public:
    doublyList()
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
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void displayList()
    {
        node *current = tail;
        while (current != nullptr)
        {
            std::cout << current->data << std::endl;
            current = current->prev;
        }
    }

    void specificPos(int pos, int node_value)
    {
        node *newNode = new node(node_value);
        node *current = head;

        for (int i = 0; i < pos - 1; i++)
        {
            current = current->next;
        }

        newNode->next = current->next;
        current->next->prev = newNode;
        current->next=newNode;
        newNode->prev = current;
    }
};

int main()
{
    doublyList list_one;
    list_one.addNode(1);
    list_one.addNode(2);
    list_one.addNode(3);
    list_one.addNode(4);
    list_one.addNode(5);

    list_one.specificPos(2, 10);

    list_one.displayList();

    return 0;
}