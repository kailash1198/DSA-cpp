#include <iostream>
using namespace std;

int main(void)
{

    int myArray[7] = {8, 200, 50, 20, 30, 5, 100};
    int temp;


    // before sorting
    cout << "Before sorting" << endl
         << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << myArray[i] << " ";
    }

    cout << endl;
    cout << endl;

    // selection sorting algorithms implementation

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {

            
            if(myArray[i]<myArray[j])
            {
                temp = myArray[j];
                myArray[j] = myArray[i];
                myArray[i] = temp;

            }
        }
    }

    // after sorting
    cout << "After sorting" << endl
         << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << myArray[i] << " ";
    }
}