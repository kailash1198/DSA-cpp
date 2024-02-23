#include <iostream>
using namespace std;
//node definition for represent linked list
class node
{
public:
    int data;
    node *next;
};

int main(void)
{
    node *head;
    node *firstNode;
    node *secondNode;
    node *thirdNode;
    node *fourthNode;
    node *fifthNode;

    head = new node(); // node() is constructor which happen run time
    firstNode = new node();
    secondNode = new node();
    thirdNode = new node();
    fourthNode = new node();
    fifthNode = new node();

    firstNode->data = 100;
    secondNode->data = 200;
    thirdNode->data = 300;
    fourthNode->data = 400;
    fifthNode->data = 500;

    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = fourthNode;
    fourthNode->next = fifthNode;
    fifthNode->next = NULL;

    head = firstNode;
    while(head!=NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
}