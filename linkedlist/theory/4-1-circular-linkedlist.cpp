#include <iostream>
using namespace std;

// circular linked list representation
class node
{
public:
    int data;
    node *next;
};

int main(void)
{
    node *last;
    node *one;
    node *two;
    node *three;

    last = new node();
    one = new node();
    two = new node();
    three = new node();

    one->data = 100;
    two->data = 200;
    three->data = 300;

    one->next = two;
    two->next = three;
    three->next = one;

    last = three;
    node *current = last->next;

    do
    {
        cout << current->data << endl;
        current = current->next;
    } while (current != last->next);
}