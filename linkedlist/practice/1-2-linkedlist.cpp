#include <iostream>
using namespace std;
// singly linked list

class node
{
public:
    int data;
    node *next; // self refrencing pointer
};

class nodeCreate
{
public:
    node *head;
    node *tail;
    nodeCreate()
    {
        head = nullptr;
        tail = nullptr;
    };
    void nodeFunc(int num)
    {
        head = new node();
        head->data = num;
        head->next = nullptr;
    }

    //connect node
    void nodeConnect(){
        node *temp;
        temp->next = head;
        head->next = temp;
    }
};



int main(void)
{
    nodeCreate eleOne;
    eleOne.nodeFunc(10);
    eleOne.nodeFunc(20);
}