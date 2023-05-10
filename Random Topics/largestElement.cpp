#include <iostream>
using namespace std;
int largestElement(int arr[], int n )
{   int pos =0 ;
    for(int i =0;i<n ;i++)
    {
       if(arr[i]>arr[pos])
       {
           pos = i;
       }
       
    }
    return pos;
}
int main() {
    int arr[] = {10,30,2,45,0};
    int n = sizeof(arr)/sizeof(int);
    int posMax = largestElement(arr,n);
    cout<<"the largest element position is " <<posMax;

    return 0; 
}