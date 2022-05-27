#include <iostream>
using namespace std;

int prefixSum(int arr[], int n)
{
  int prefixArray[n] = {0};
 
  for(int i= 0; i<n ;i++)
  {

    if(i==0)
    {
        prefixArray[0] = arr[0];
    }
    prefixArray[i] = prefixArray[i-1] + arr[i] ;
    
  }
  
  int maxSum = 0;
  for(int i =0;i<n;i++)
    
  {   
      int sum =0; 
      for(int j =i ; j<n;j++)
       {
         sum = prefixArray[j] - prefixArray[i-1];
       }
    
      maxSum = max(sum,maxSum);
  }
 
  return maxSum; 
}

int main() {
    int arr[] = {5,2,-3,2,-1,9};
    int n = sizeof(arr)/sizeof(int);

    int Sum = prefixSum(arr,n);
    cout<<"the max sum is "<<Sum;
    return 0; 
}