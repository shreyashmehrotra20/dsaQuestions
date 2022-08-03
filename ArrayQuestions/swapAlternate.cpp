#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
   {
    cout<<arr[i]<<" ";
   }
}
void swapAlternate(int arr[], int size)
{
   for (int i = 0; i < size; i+=2)
   {
    if(i<size-1)
    {
        swap(arr[i],arr[i+1]); // swapping the consecutive indexes in an array
    }
   }
   
}
int main() {
    int arr[]= {1,2,7,8,5,0,9,-2};
    int size = sizeof(arr)/sizeof(size);
    swapAlternate(arr,size);
    printArray(arr,size);
    return 0; 
}