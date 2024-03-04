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

    void createNode(int nodeData){
        node *newNode = new node(nodeData);
        if(head==nullptr){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insertNode(int pos, int insertData){
        node *newInsertData = new node(insertData);
        node *current = head;

        for(int i=1; i<pos-1; i++){
            current = current->next;
        }
        
        newInsertData->next = current->next;
        current->next = newInsertData;
    }

    void listDisplay(){
        node *current = head;
        while(current!=nullptr){
            cout<<current->data<<endl;
            current = current->next;
        }
    }
};

int main(void)
{
    linkedList list;
    list.createNode(10);
    list.createNode(20);
    list.createNode(30);
    list.createNode(40);
    list.createNode(50);
    list.createNode(60);
    list.createNode(70);
    list.createNode(80);
    list.createNode(90);
    list.createNode(100);


    list.insertNode(8, 400);
    list.listDisplay();
}