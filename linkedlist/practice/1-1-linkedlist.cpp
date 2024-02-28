#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

int main(void)
{
    node *nodeObj[4];

    for (int i = 0; i < 4; i++)
    {
        nodeObj[i] = nullptr;
    }

    for (int i = 0; i < 4; i++)
    {
        nodeObj[i] = new node();
    }

    nodeObj[1]->data = 10;
    nodeObj[2]->data = 20;
    nodeObj[3]->data = 20;
    
}