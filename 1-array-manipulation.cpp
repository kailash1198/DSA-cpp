#include <iostream>
using namespace std;
//traversing array searching algorithms
int main(void)
{
    int SIZE;
    int searchCode;
    cout << "Give me size of student data : ";
    cin >> SIZE;
     int studentCode[SIZE];
    cout << "Enter all student code one-by-one : ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> studentCode[i];
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Your student Code Data : ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << studentCode[i] << " ";
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Enter code for search in database : ";
    cin >> searchCode;

    for (int i = 0; i < SIZE; i++)
    {
        if (searchCode == studentCode[i])
        {
            cout << "The code found on : " << i << " Position" << endl;
        }else{
            cout<<"Code not exist in your database"<<endl;
        }
    }
}