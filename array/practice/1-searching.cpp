#include <iostream>
using namespace std;
// array searching
// binary search

int main(void)
{
    int myArray[8] = {2, 3, 4, 5, 6, 7, 8, 9};
    int searchKey = 6;
    int mid;

    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    for(int i=0; i<arraySize; i++){
       mid = myArray[arraySize]/2;
       if(searchKey==mid){
        cout<<"Item found"<<endl;
       }

       if(searchKey>mid){
        
       }
    }
    cout<<mid<<endl;
}