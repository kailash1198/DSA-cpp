#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class linkedList
{
private:
    node *head;
    node *tail;

public:
    linkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void add_node(int dataValue)
    {
        node *newNode = new node(dataValue);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void display_list()
    {
        node *current = head;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
    // last node deletion function logic
    void delete_last_node()
    {
        node *current = head;
        // main logic for traversing list till second last node of the list
        while (current->next->next != nullptr)
        {
            current = current->next;
        }

        delete current->next;
        current->next = nullptr;
    }
};

int main(void)
{
    linkedList list_one;
    list_one.add_node(10);
    list_one.add_node(20);
    list_one.add_node(30);
    list_one.add_node(40);
    list_one.add_node(50);
    list_one.delete_last_node();
    list_one.delete_last_node();
    list_one.display_list();
}