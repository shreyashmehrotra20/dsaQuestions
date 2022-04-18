#include <iostream>
using namespace std;
void arrayReverse(int arr[],int n) 
{
  int s = 0;
  int e =n-1;
  while(s<=e)
  {
      swap(arr[s],arr[e]);
      s+=1;
      e-=1;
 }
}
int main() {
    cout<<"intial array is "<<endl;
    int arr[] = {1,2,3,4,5,6,7};
    
    int n = sizeof(arr)/sizeof(int);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout <<"the reverse array is"<<endl;
    arrayReverse(arr,n);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}