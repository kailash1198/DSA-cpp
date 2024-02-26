#include <iostream>
using namespace std;
// singly linked list
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

    one->data = 100;
    two->data = 200;
    three->data = 300;

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