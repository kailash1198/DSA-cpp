#include <iostream>
using namespace std;
// Traversing Linked list in singly linked list
class node
{
public:
    int data;
    node *next;
};

int main(void)
{
    node *head;
    node *one;
    node *two;
    node *three;

    head = new node();
    one = new node();
    two = new node();
    three = new node();

    one->data = 10;
    two->data = 20;
    three->data = 30;

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}