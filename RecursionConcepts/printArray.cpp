#include <iostream>
using namespace std;
void printArray(int arr[],int index, int size)
{   
    if(index==size)
    {
        return;
    }
    cout<<arr[index]<<" ";
    printArray(arr,index+1,size);

}
int main() {
    int arr[] = {3,4,5,6,1,2,1,2,3,4,5,5};
    int n = sizeof(arr)/sizeof(int);
    printArray(arr,0,n);
    return 0; 
}