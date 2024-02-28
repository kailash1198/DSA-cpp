#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int UserData)
    {
        data = UserData;
        next = NULL;
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
        head = NULL;
        tail = NULL;
    }

    void createNode(int num)
    {
        node *nodeOne = new node(num);
        if (head == NULL)
        {
            head = nodeOne;
            tail = nodeOne;
        }
        else
        {
            tail->next = nodeOne;
            tail = nodeOne;
        }
    }

    void displayList(){
        node *temp;
        temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
};
int main(void)
{
    linkedList one;
    one.createNode(100);
    one.createNode(200);
    one.createNode(300);

    one.displayList();
}