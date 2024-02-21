#include <iostream>
using namespace std;
// array sorting in ascending order
int main(void)
{
    int size;
    cout << "Please enter size of the user list : ";
    cin >> size;
    int userList[size];

    cout << endl;
    cout << endl;

    cout << "Please enter user code : ";
    for (int i = 0; i < size; i++)
    {
        cin >> userList[i];
    }
    cout << endl;
    cout << endl;

    cout << "Before sorting - user list : ";
    for (int i = 0; i < size; i++)
    {
        cout << userList[i] << " ";
    }

    cout << endl;
    cout << endl;
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (userList[j] > userList[j + 1])
            {
                int temp = userList[j];
                userList[j] = userList[j + 1];
                userList[j+1] = temp;
            }
        }
    }

    cout << "After sorting ascending order of your user list : ";
    for (int i = 0; i < size; i++)
    {
        cout << userList[i] << " ";
    }
}