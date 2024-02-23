#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string studentName;
    student *next;
};

int main(void)
{
    string searchKey = "kailash";
    student *head;
    student *studentOne;
    student *studentTwo;
    student *studentThree;
    student *studentFour;
    student *studentFive;

    head = new student();
    studentOne = new student();
    studentTwo = new student();
    studentThree = new student();
    studentFour = new student();
    studentFive = new student();

    studentOne->next = studentTwo;
    studentTwo->next = studentThree;
    studentThree->next = studentFour;
    studentFour->next = studentFive;
    studentFive->next = NULL;

    cout << "Enter student Name : ";
    head = studentOne;
    while (head != NULL)
    {
        cin >> head->studentName;
        // getline(cin, head->studentName);
        head = head->next;
    }

    head = studentOne;
    while (head != NULL)
    {
        if (searchKey == head->studentName)
        {
            cout << "Found : " << head->studentName << endl;
        }
        head = head->next;
    }
}