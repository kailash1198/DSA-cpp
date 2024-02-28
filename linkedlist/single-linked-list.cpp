#include <iostream>
using namespace std;
// node structure
class node
{
public:
    int data;
    node *next;

    node()
    {
        data = data;
        next = nullptr; // nullptr is inbuilt keywords
    }
};

// linked list
class linkedList
{
private:
    node *head;

public:
    linkedList()
    {
        head = nullptr;
    }

    // destructor for realease memory
    ~linkedList()
    {
        node *current = head;
        while (current != nullptr)
        {
            node *next = current->next;
            delete current;
            current = next;
        }

        head = nullptr;
    }
};

int main(void)
{
    node obj1;
    obj1.data=10;
}