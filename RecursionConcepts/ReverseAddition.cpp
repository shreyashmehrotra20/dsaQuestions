#include <iostream>
using namespace std;

void ReverseArray(int arr[],int index)
{
    if(index<0)
    {
        return;
    }
    cout<<arr[index]<<" ";
    ReverseArray(arr,index-1);
}
int main() {
    int arr[] = {3,4,5,6,1};
    int n = sizeof(arr)/sizeof(int);
    ReverseArray(arr,n-1);
    return 0;
    }  