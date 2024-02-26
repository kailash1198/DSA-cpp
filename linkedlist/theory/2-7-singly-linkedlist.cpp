#include <iostream>
using namespace std;

// representation on node structure

class node
{
public:
    int data;
    node *next;
};

class nodeCreation
{
public:
    node *nodePointer;
    nodeCreation()
    {
        nodePointer = new node();
    }
};

int main(void)
{
    node *head;
    nodeCreation nodeList;

}