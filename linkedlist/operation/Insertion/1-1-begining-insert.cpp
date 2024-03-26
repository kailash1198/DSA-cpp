#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int a)
    {
        data = a;
        next = NULL;
    }
};

class linkedList
{
public:
    node *head;
    node *tail;
    linkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void addNode(int num)
    {
        node *newNode = new node(num);
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

    void insertingBegining(int value)
    {
        node *newNodeInsert = new node(value);

        node *curent = head;
        newNodeInsert->next = curent;
        head = newNodeInsert;
    }

    void displayList()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main(void)
{
    linkedList listOne;
    listOne.addNode(10);
    listOne.addNode(20);
    listOne.addNode(30);
    listOne.addNode(40);

    listOne.insertingBegining(11);

    listOne.displayList();
}