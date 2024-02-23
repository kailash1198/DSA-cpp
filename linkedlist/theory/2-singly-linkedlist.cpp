#include <iostream>
using namespace std;
//singly linked list - only have next pointer means store only next node in next pointer using pointers.\

class node
{
public:
    int data;
    node *next;
};

int main(void)
{
    // Step-1 create node using node structure
    node *head;
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;

    // step-2 allocated 3 node in Heap memory with dynamic memory allocation. Because linked list implement in runtime.
    one = new node();
    two = new node();
    three = new node();

    // step-3 assign value to each node
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // step-4 conncet node to next node pointers
    one->next = two;
    two->next = three;
    three->next = NULL;

    // step-5 print linked list value
    head = one;
    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
    }
}