#include <iostream>
using namespace std;
// doubly linked list
class node
{
public:
    node *prev;
    int data;
    node *next;
    node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class doublyLinkedList
{
private:
    node *first;
    node *second;

public:
    doublyLinkedList()
    {
        first = NULL;
        second = NULL;
    }

    void addingNode(int num){
        node *newNode = new node(num);
        if(first==NULL){
            first = newNode;
            second = newNode;
        }else{
            second->next = newNode;
            second = newNode;
        }
    }

    void display(){
        node *current;
        current = first;
        while(current!=NULL){
            cout<<current->data<<endl;
            current = current->next;
        }
    }
};

int main(void)
{
    doublyLinkedList listOne;
    listOne.addingNode(10);
    listOne.addingNode(20);

    listOne.display();
}