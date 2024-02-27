#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

class nodeCreation: public node
{
public:
    nodeCreation(int nodeNum)
    {
        node *ptr = new node();
    }

    void nodeData(int data){
        
    }
};

int main(void)
{
    // node *head = new node();
    // node *one = new node();
    // node *two = new node();
    // node *three = new node();
    // node *four = new node();

    nodeCreation nodeList(5);

    one->data = 10;
    two->data = 20;
    three->data = 30;
    four->data = 40;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = nullptr;

    head = one;
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}