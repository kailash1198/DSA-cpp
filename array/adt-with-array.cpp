#include <iostream>
#include <string>
using namespace std;

// struct array
// {
//     int *A;
//     int size;
//     int length;
// };

// custum array data types
struct myArray
{
    int totalSize;
    int usedSize;
    int *ptr;
};

void createArray(struct myArray *a, int tSize, int uSize)
{
    (*a).totalSize = tSize;
    (*a).usedSize = uSize;
    (*a).ptr = (int *)malloc(tSize * sizeof(int));
}

int main(void)
{
    struct myArray marks;
    createArray(&marks, 100, 20);
    // struct array arr;
    // cout << "Enter array size : ";
    // cin >> arr.size;

    // arr.A = (int *)malloc(arr.size * sizeof(int));
    // arr.length = 0;

    // cout<<"Please enter number of elements here : ";
    // cin>>arr.length;

    // cout<<"Enter element one-by-one";
    // for(int i=0; i<arr.length; i++){
    //     cin>>arr.A[i];
    // }
}