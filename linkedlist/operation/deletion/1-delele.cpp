#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

public:
    node(int value)
    {
        data = value;
        next = NULL;
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
        head = NULL;
        tail = NULL;
    }

    void addNode(int dataValue)
    {
        node *newNode = new node(dataValue);
        if (head == NULL)
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

    void displayList()
    {
        node *current = head;
        while (current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }

    void deleteOperationFirst()
    {
        head = head->next;
    }

    void deletePosition(int pos){

    };
};
int main(void)
{
    linkedList newList;
    newList.addNode(10);
    newList.addNode(20);
    newList.addNode(30);
    newList.addNode(40);
    newList.addNode(50);

    // newList.deleteOperationFirst();
    // newList.displayList();

    // newList.deletePosition(2);
    // newList.displayList();
}
