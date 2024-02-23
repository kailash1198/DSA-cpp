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
    node *head = new node();
    node *one = new node();
    node *two = new node();
    node *three = new node();
    node *four = new node();
    node *five = new node();

    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;
    five->data = 5;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;

    // before insertion
    head = one;
    while (head != NULL)
    {
        cout << head->data << "     ";
        head = head->next;
    }

    // line break
    cout << endl;
    cout << endl;
    cout << endl;

    //  insert element in starting
    node *newDataStart;
    newDataStart = new node();
    newDataStart->data = 10;
    newDataStart->next = one;
    one = newDataStart;

    // insert in last
    node *newDataLast;
    newDataLast = new node();
    newDataLast->data = 20;
    newDataLast->next = NULL;

    node *temp;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newDataLast;

    //  after inserting node element
    head = one;
    while (head != NULL)
    {
        cout << head->data << "     ";
        head = head->next;
    }
}