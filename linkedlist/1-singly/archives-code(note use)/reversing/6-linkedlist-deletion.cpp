#include <iostream>
using namespace std;
// node structure
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

// function for creating the node
node *head = nullptr;
node *tail = nullptr;

void nodeCreation(int nodeValue)
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

// function for delete the first node
void deleteFirstNode()
{
    
    head = head->next;
}

// function for display the node
void displayList(){
    node *current = head;
    while(head!=nullptr){
        cout<<current->data<<endl;
        current = current->next;
    }
}
int main(void)
{
    nodeCreation(1);
    nodeCreation(2);
    nodeCreation(3);
    nodeCreation(4);
    nodeCreation(5);

    deleteFirstNode();
    displayList();
}