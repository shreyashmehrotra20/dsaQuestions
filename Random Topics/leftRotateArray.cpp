#include <iostream>
using namespace std;
void leftShift(int arr[], int n )
{    
     arr[n-1] = arr[0];
     for(int i = 0; i<n-1;i++) {
         arr[i] = arr[i+1] ;
     }
}
int main() {
    int arr[] = {20, 30 ,40,50};
    int n = sizeof(arr)/sizeof(n);
    leftShift(arr,n);
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0; 
}