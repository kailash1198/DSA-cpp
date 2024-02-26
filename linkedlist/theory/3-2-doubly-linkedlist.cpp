#include <iostream>
using namespace std;
class node
{
public:
    node *prev;
    int data;
    node *next;
};

int main(void)
{
    node *head = new node();
    node *one = new node();
    node *two = new node();
    node *three = new node();

    one->data = 10;
    two->data = 20;
    three->data = 30;

    one->prev = NULL;
    one->next = two;

    two->prev = one;
    two->next = three;

    three->prev = two;
    three->next = NULL;

    node *newNodeBegin = new node();
    newNodeBegin->data = 50;
    


    head = one;
    while(head!=NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
}