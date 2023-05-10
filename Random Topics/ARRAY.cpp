
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n = sizeof(arr)/sizeof(int);
    cout<<"enter values"<<endl;
    int a ;
    cout<<"enter value";
    cin>>a;
    for(int i =0; i<a;i++)
    {   
        cin>> arr[i] ;
    }
     for(int i =0; i<a;i++)
    {
       cout<<arr[i]<<endl ;
    }
    return 0; 
}