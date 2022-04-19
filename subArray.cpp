#include <iostream>
using namespace std;
int subArray(int arr[], int n)
{   int maximum =0 ;
    for(int i =0;i<n;i++)
    {
      for(int j =i ; j<n;j++)
      {   int sum =0 ;
          for(int k =i ;k<j;k++)
          {
             
              sum +=arr[k];
          }
         maximum = max(maximum,sum);
          /* this is the long method we can do the same thig by using max variable
          if(max<=sum)
          {
             max = sum;
             
          }
          else 
          { 
              
              continue;
          }
          */
      }
    }
    return maximum;

}
int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    int maxSum = subArray(arr,n);
    cout<<"max sum "<< maxSum;
    return 0; 
}