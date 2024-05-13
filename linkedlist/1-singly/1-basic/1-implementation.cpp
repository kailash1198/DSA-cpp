#include <iostream>
// node structure
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

// linked list
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

    void addNode(int dataValue)
    {
        node *newNode = new node(dataValue);
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

    void displayNode()
    {
        node *current = head;
        while(current!=nullptr){
            std::cout<<current->data<<std::endl;
            current = current->next;
        }
    }
};

int main()
{
    linkedList list_one;
    list_one.addNode(1);
    list_one.addNode(2);
    list_one.addNode(3);
    list_one.addNode(4);
    list_one.addNode(5);
    list_one.addNode(6);

    list_one.displayNode();
    return 0;
}