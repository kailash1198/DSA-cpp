#include <iostream>
using namespace std;
// Linked List - Linear data structure or sequncial data structure
// Linked consis a node - Data field & refrence of next nodes in the list = linked list
//  Linked list allow to dynamic memory allocation and memory allocated at run time that means memory given in Heap memory section
// Head node - First node in the list
// Tail node - Last node in the list (Point to pointer)
// Types of Linked List
// 1. Singly linked list
// 2. Doubly linked list
// 3. Circular linked list
// 4. Circular doubly linked list
// 5. Header linked list

// linked list creation using class
class node
{
public:
    int data;   // actual data/value
    node *next; // refrence for next node/pointer
};

int main(void)
{
}