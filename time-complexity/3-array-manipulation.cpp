#include <iostream>
using namespace std;

// array element deleting as per user given data

int main(void)
{
    int size;
    int position;
    cout << "Enter size of array : ";
    cin >> size;

    int myArray[size];
    cout << "Enter elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> myArray[i];
    }

    cout << "Before deleting : ";
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Enter position you want delete : ";
    cin >> position;

    for (int i = position-1; i < size; i++)
    {
        myArray[i] = myArray[i+1];
    }

    cout << "After deleting : ";
    for (int i = 0; i < size-1; i++)
    {
        cout << myArray[i] << " ";
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}