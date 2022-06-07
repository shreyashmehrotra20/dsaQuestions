#include <iostream>
using namespace std;
int equilibriumPoint(int arr[], int n)
{
    int sum =0;
 for(int i = 0 ; i<n;i++)
 {
     sum = sum +arr[i];
     if(sum == arr[i])
     {
         cout<<arr[i]<<endl;;
     }
 }
 
}
int main() {
    int arr[]= {2,3,5,5};
    int n =  sizeof(arr)/sizeof(int);
    int a = equilibriumPoint(arr,n);
    if(a==-1)
    {
        cout<<"no eql";
    }
    else
    {
        cout<<a;
    }
    return 0; 
}