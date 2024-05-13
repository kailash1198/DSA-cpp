#include <iostream>
#include <string>

class node
{
public:
    std::string data;
    node *next;
    node(std::string data_value)
    {
        data = data_value;
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

    void addNode(std::string node_value)
    {
        node *newNode = new node(node_value);
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

    void displayList()
    {
        node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << std::endl;
            current = current->next;
        }
    }

    void insertStarting(std::string data_value)
    {
        node *newNode = new node(data_value);
        if (head != nullptr)
        {
            newNode->next = head;
            head = newNode;
        }
    }
};

int main()
{
    linkedList student_list;
    student_list.addNode("Kailash");
    student_list.addNode("Aryan");
    student_list.addNode("Shivam");
    student_list.addNode("Kavita");
    student_list.addNode("Baibhav");
    student_list.addNode("Sangeetha");

    student_list.insertStarting("Swami");
    student_list.insertStarting("vikram");

    student_list.displayList();

    return 0;
}