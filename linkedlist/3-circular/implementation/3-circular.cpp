#include <iostream>
class node
{
public:
    std::string name;
    node *next;
    node(std::string name_value)
    {
        name = name_value;
        next = nullptr;
    }
};
class listStructure
{
private:
    node *head;

public:
    listStructure()
    {
        head = nullptr;
    }

    void addName(std::string name_value)
    {
        node *newName = new node(name_value);
        if (head == nullptr)
        {
            head = newName;
            head->next = newName;
        }
        else
        {
            node *current = head;
            while (current->next != head)
            {
                current = current->next;
            }
            current->next = newName;
            newName->next = head;
            head = newName;
        }
    }

    void displayName()
    {
        node *current = head;
        do
        {
            std::cout << current->name << std::endl;
            current = current->next;
        } while (current != head);
    }
};
int main()
{
    listStructure list_one;
    list_one.addName("Kailash");
    list_one.addName("Aryan");
    list_one.addName("Laxmi");
    list_one.addName("Shyam");
    list_one.addName("Shyam");
    list_one.addName("Shyam");

    list_one.displayName();
    return 0;
}