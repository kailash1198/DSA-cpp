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
    node *head;
    node *one;
    node *two;
    node *three;

    head = new node();
    one = new node();
    two = new node();
    three = new node();

    one->data = 100;
    two->data = 200;
    three->data = 300;

    // connecting nodes
    one->next = two;
    one->prev = NULL;

    two->next = three;
    two->prev = one;

    three->next = NULL;
    three->prev = two;

    head = one;
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;

    }
}