#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
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

    void insertNode(int pos, int dataValue){
        node *newNode = new node(dataValue);

        node*current = head;
        for(int i=1; i<pos-1;i++){
            current = current->next;
        }

        newNode->next = current->next;
        current->next=newNode;
    }

    void displayNode()
    {
        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main()
{
    linkedList one;
    one.addNode(1);
    one.addNode(2);
    one.addNode(3);
    one.addNode(4);
    one.addNode(5);
    one.addNode(6);
one.insertNode(3,100);
    one.displayNode();
}