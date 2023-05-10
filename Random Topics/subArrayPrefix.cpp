#include <iostream>
using namespace std;

int prefixSum(int arr[], int n)
{
  int prefixArray[30] = {0};
  prefixArray[0] = arr[0];
 
  for(int i= 1; i<n ;i++)
  {
      
    
    prefixArray[i] = prefixArray[i-1] + arr[i] ;

   
    
  }
  
  int maxSum = 0;
  for(int i =0;i<n;i++)
    
  {   
      
      for(int j =i ; j<n;j++)
       {
         int sum = (i>0) ? prefixArray[j] - prefixArray[i-1] : prefixArray[j];
         maxSum = max(sum,maxSum);
       }
    
      
  }
 
  return maxSum; 
}

int main() {
    int arr[] = {5,-3,-4,5,6};
    int n = sizeof(arr)/sizeof(int);

    int Sum = prefixSum(arr,n);
    cout<<"the max sum is "<<Sum;
    return 0; 
}