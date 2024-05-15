#include <iostream>
class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int data_value)
    {
        data = data_value;
        prev = nullptr;
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

    void addNode(int node_value)
    {
        node *newNode = new node(node_value);
        if(head==nullptr){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void displayList(){
        node *current = head;
        while(current!=nullptr){
            std::cout<<current->data<<std::endl;
            current=current->next;
        }
    }
};

int main()
{
    linkedList list_one;
    list_one.addNode(1);
    list_one.addNode(2);
    list_one.addNode(3);
    list_one.addNode(4); 
    list_one.addNode(5); 
    list_one.addNode(6); 
    list_one.displayList();

    return 0;
}