#include <iostream>
using namespace std;
//enter n node creating linked list as per user given size
class number
{
public:
    int value;
    int *next;
};

int main(void)
{

    // creating n node
    int size;
    cout << "Enter number of Node : ";
    cin >> size;

    number *head;
    head = new number();
    number *numNode[size];
    for (int i = 0; i < size; i++)
    {
        numNode[i] = new number();
    }

    for (int i = 0; i < size; i++)
    {
        numNode[i] = numNode[i + 1];
    }
    numNode[size - 1] = NULL;

    for (int i = 0; i < size; i++)
    {
        head = numNode[i];
        if (head != NULL)
        {
            cin >> head->value;
        }
        head->next;
    }
}