#include <iostream>
#include <string>
using namespace std;

struct array
{
    int *A;
    int size;
    int length;
};

int main(void)
{
    struct array arr;
    cout << "Enter array size : ";
    cin >> arr.size;

    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    cout<<"Please enter number of elements here : ";
    cin>>arr.length;

    cout<<"Enter element one-by-one";
    for(int i=0; i<arr.length; i++){
        cin>>arr.A[i];
    }
}