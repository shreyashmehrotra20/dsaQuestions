#include <iostream>
using namespace std;
int subArray(int arr[], int n)
{   int max =0 ;
    for(int i =0;i<n;i++)
    {
      for(int j =i ; j<n;j++)
      {   int sum =0 ;
          for(int k =i ;k<j;k++)
          {
              cout<<arr[k]<<",";
              sum +=arr[k];
          }
          cout<<endl;
          if(max<=sum)
          {
             max = sum;
             
          }
          else 
          { 
              
              continue;
          }
      }
    }
    return max;

}
int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    int maxSum = subArray(arr,n);
    cout<<"max sum "<< maxSum;
    return 0; 
}