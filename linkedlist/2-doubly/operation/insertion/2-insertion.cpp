#include <iostream>

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int data_value)
    {
        data = data_value;
        prev = nullptr;
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
        node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << std::endl;
            current = current->next;
        }
    }

    void insertionFirst(int node_value)
    {
        node *newNode = new node(node_value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
};

int main()
{
    linkedList dataList;
    dataList.addNode(1);
    dataList.addNode(2);
    dataList.addNode(3);
    dataList.addNode(4);
    dataList.addNode(5);
    dataList.addNode(6);

    dataList.insertionFirst(0);
    dataList.insertionFirst(100);

    dataList.displayList();

    return 0;
}