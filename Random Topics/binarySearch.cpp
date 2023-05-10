#include <iostream>
using namespace std;
int binaryFunction(int arr[],int n,int key) 
{  
   int s=0;
   int e =n-1;
   while(s<=e){
       int mid = (s+e)/2;
       if(key==arr[mid])
       {
           return mid;
       }
       else if(key>arr[mid])
       {
          s = mid +1 ;
          
       }
       else if (key<arr[mid])
       {
           e=mid-1;
       }
   }

   return -1;
}
int main() {
    int arr[] = {10,30,40,45,50,60,70};
    int n = sizeof(arr)/sizeof(int);
    int key ;
    cout<<"enter key u want to search"<<endl;
    cin>>key;
    int ans = binaryFunction(arr,n,key);
    if(ans == -1)
    {
        cout<<"value not found "<<endl;
    }
    else
    {
       cout<<"value found at "<<ans<<endl;
    }


    return 0; 
}