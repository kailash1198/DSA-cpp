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
    };

    void AddingData(int num)
    {
        node *newNode = new node(num);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void displayList(){
        node *cuurent = head;
        while(cuurent!=NULL){
            cout<<"Your data : "<<cuurent->data<<endl;
            cuurent = cuurent->next;
        }
    }
};

int main(void)
{
    int howMuch;
    int data;
    linkedList listOne;

    // listOne.AddingData(100);
    // listOne.AddingData(200);
    // listOne.AddingData(300);
    // listOne.AddingData(400);
    // listOne.AddingData(500);
    // listOne.displayList();
    cout<<"How much data do you need to add : ";
    cin>>howMuch;
    for(int i=0; i<howMuch; i++){
        cin>>data;
        listOne.AddingData(data);
    }
    system("cls");
    listOne.displayList();
}