#include <iostream>
using namespace std;
// operation on linked list
class node
{
public:
    int data;
    node *next;

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
    // insert in begining of Linked list
    void insertBegining(int insertValue)
    {
        node *insertData = new node(insertValue);
        insertData->next = head;
        head = insertData; // important line to be understand becuase value update in this line
    }

    // display Linked list
    void displayList()
    {
        node *current = head;
        while (current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
};
int main(void)
{
    linkedList listOne;
    listOne.addNode(100);
    listOne.addNode(200);
    listOne.addNode(300);
    listOne.addNode(400);

    listOne.insertBegining(1);
    listOne.displayList();
}