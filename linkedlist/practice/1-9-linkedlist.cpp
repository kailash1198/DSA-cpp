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

    void addingNode(int num)
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

    void insertNodePosition(int pos, int num)
    {
        node *current = head; //temporariry
        node *newDataInsert = new node(num);//to be added data


        for (int i = 0; i < pos-1; i++)
        {
            current = current->next;
        }

        newDataInsert->next = current->next;
        current->next = newDataInsert;
        if(newDataInsert->next==NULL){
            tail = newDataInsert;
        }
    }

    void display()
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
    linkedList list;
    list.addingNode(10);
    list.addingNode(20);
    list.addingNode(30);
    list.addingNode(40);
    list.addingNode(50);
  

    list.insertNodePosition(1, 100);
      list.display();
}