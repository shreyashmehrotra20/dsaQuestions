#include <iostream>
using namespace std;
void removeZero(int arr[],int n) 
{   int count = 0 ;
    for(int i =0; i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[count],arr[i]);
            count ++ ;
        }
    }
}
int main() {
    int arr[]= {10,0,2,0,4};
    int n = sizeof(arr)/sizeof(int);
    removeZero(arr,n);
    for(int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
    
    return 0; 
}