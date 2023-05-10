#include <iostream>
using namespace std;
int linearSearch(int arr[],int n , int key)
{
      for(int i =0; i<n;i++)
      {
          if(arr[i]==key)
          {
              return i ;
          }

      }
      return -1;
}
int main() {
    int arr[] = {3,2,5,6,78,9,12,15};
    int n = sizeof(arr)/sizeof(int);
    int key ;
    cout<< "enter key u want to search"<<endl;
    cin>> key;
    int val = linearSearch(arr,n,key);
    if(val==-1)
    {
        cout << "key not found"<<endl;
    }
    else 
    {
        cout<<"key found at "<<val<<endl;
    }
    return 0; 
}