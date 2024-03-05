#include <iostream>
using namespace std;

int main(void)
{
    int myArray[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int searchKey = 100;

    for (int i = 0; i < 10; i++)
    {
        if (myArray[i] == searchKey)
        {
            cout << "Found : " << myArray[i] << endl;
            cout << "Position : " << i << endl;
        }
    }
}