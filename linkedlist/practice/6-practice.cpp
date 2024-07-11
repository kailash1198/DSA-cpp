#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int nodeValue)
    {
        data = nodeValue;
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

    void addNode(int nodeValue)
    {
        node *newNode = new node(nodeValue);
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

    void displayList()
    {
        node *current = head;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }

    void insertion(int index, int nodeValue)
    {
        node *newNode = new node(nodeValue);
        node *current = head;
        if (index == 1)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            for (int i = 1; i < index - 1; i++)
            {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
            current = newNode;
        }
    }

    void deletion(int index)
    {
        node *current = head;

        if (index == 1)
        {
            head = current->next;
            current = nullptr;
            delete current;
        }
        else
        {
            for (int i = 1; i < index - 1; i++)
            {
                current = current->next;
            }
            node *tamp = current->next;
            current->next = tamp->next;
        }
    }

    void searching(int key){
        node* current = head;
        while(current!=nullptr){
            if(current->data==key){
                cout<<"Search done"<<endl;
                exit(0);
            }
            current=current->next;
        }
    }
};

int main()
{
    linkedList myList;
    myList.addNode(1);
    myList.addNode(2);
    myList.addNode(3);
    myList.addNode(4);
    myList.addNode(5);
    myList.addNode(6);
    myList.addNode(7);

    myList.insertion(3, 0);
    myList.deletion(4);

    myList.displayList();

    myList.searching(0);
    return 0;
}