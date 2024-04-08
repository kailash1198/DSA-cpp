#include <iostream>

using namespace std;

class node
{
public:
    string userName;
    node *next;
    node *prev;
    node(string value)
    {
        userName = value;
        next = nullptr;
        prev = nullptr;
    }
};

class userNameList
{
private:
    node *head;
    node *tail;

public:
    userNameList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void addUserName(string userName)
    {
        node *newUserName = new node(userName);
        if (head == nullptr)
        {
            head = newUserName;
            tail = newUserName;
        }
        else
        {
            tail->next = newUserName;
            newUserName->prev = tail;
            tail = newUserName;
        }
    }

    void displayUserNameList()
    {
        node *current = head;

        while (current != nullptr)
        {
            cout << current->userName << endl;
            current = current->next;
        }
    }

    void insertionPos(int pos, string dataValue)
    {
        node *newUserName = new node(dataValue);
        node *current = head;
        for (int i = 1; i < pos - 1; i++)
        {
            current = current->next;
        }

        newUserName->next = current->next;
        newUserName->prev = current;
        current->next->prev = newUserName;
        current->next = newUserName;
    }
};

int main()
{

    userNameList listOne;
    listOne.addUserName("User-1");
    listOne.addUserName("User-2");
    listOne.addUserName("User-3");
    listOne.addUserName("User-4");
    listOne.addUserName("User-5");
    listOne.addUserName("User-6");
    listOne.insertionPos(4, "User-10");
    listOne.displayUserNameList();

    return 0;
}