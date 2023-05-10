#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int start=0;
    int end= n-1;
    while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
    }

}
void printarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        
         cin>>arr[i];

    }
   cout<<endl;
}

    


int main() {
    

 
	int arr[100];
    int brr[100];
    int n;
    int m;
    
     cin>>n;
     
     cin>>m;
    
     
    
   reverse(arr,n);
     reverse(brr,m);

     printarray(arr,n);
     printarray(brr,m);



    cout<<reverse(arr,n)<<endl;
    cout<<reverse(brr,m)<<endl;



     return 0;


} 

