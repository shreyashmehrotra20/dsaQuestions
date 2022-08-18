#include <iostream>
using namespace std;

void print(int arr[],int n)
{    
    for(int i =0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
}
void swapAlter(int arr[],int n)
{  

   
   
   for(int i =0;i<n;i=i+2)
   {
    if(i+1<n){
    swap(arr[i],arr[i+1]);
   }
   }
}

int main() {
    int arr[6]= {0};
    int n;
    cout<<"enter the array";
    for(int i =0;i<6;i++)
    {
        cin>>arr[i];
    }

    n= sizeof(arr)/sizeof(int);

    swapAlter(arr,n);
    print(arr,n);
    
    return 0; 
}