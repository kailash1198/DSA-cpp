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

    void addNode(int num)
    {
        node *newNode = new node(num);
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

    void insertion(int insertNum, int pos)
    {
        node *newNode = new node(insertNum);
        node *temp = head;
        for (int i = 1; i < pos; ++i)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void displayList()
    {
        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main(void)
{
    linkedList listOne;
    listOne.addNode(1);
    listOne.addNode(2);
    listOne.addNode(3);
    listOne.addNode(4);
    listOne.addNode(5);

    listOne.insertion(100, 1);

    listOne.displayList();
}