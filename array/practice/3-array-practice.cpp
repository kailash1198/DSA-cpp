#include <iostream>
using namespace std;

//  Write a program to rotate the elements of an integer array to the left by 'n' positions.
// example - {1},2,3,4,5,6,7 = 2,3,4,5,6,7,{1}

// function for handle rotation process
// Function parameter - 1. Array parameter, 2. Number of the element/Size of the array, 3. Number of the position by which the elements of the array need to be rotated left.
void rotateLeft(int arr[], int n, int position)
{
    int temp[position]; // Temporariry array for store rotation array element
    for (int i = 0; i < position; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = position; i < n; i++)
    {
        arr[i - position] = arr[i];
    }

    for (int i = 0; i < position; i++)
    {
        arr[n - position + i] = temp[i];
    }
}
int main(void)
{
    int n, position;
    cout << "ENter the number of the elements in the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number of the position to rotate left : ";
    cin >> position;

    rotateLeft(arr, n, position);

    cout << "Array after roatation left by " << position << " Position : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}