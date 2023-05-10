#include <iostream>
using namespace std;
int deleteElement(int arr[] ,int n , int key) 
{
   for(int i =0;i<n;i++)
   {
       if(arr[i]  ==  key)
       
       {   
           for(int j = i; j < n-1; j++)
           {
              arr[j] = arr[j+1];
              
           }
           return n-1 ;
            
       }
    }
   return n ;
}
int main() {
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    int key ;
    cout<<"enter value u want to delete "<<endl;
    cin>>key;
    int a = deleteElement(arr,n ,key);
    for (int i = 0; i<a; i++)
           {
              cout << arr[i] <<" ";
           }
    return 0; 
}