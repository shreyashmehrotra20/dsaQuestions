#include <iostream>
using namespace std;
int kadenAlgo(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = 0;
    for(int i=0; i<n ;i++)
    {   
        currentSum += arr[i];
        if(currentSum < 0)
        {
            currentSum = 0;
        }
        
        
        maxSum = max(maxSum,currentSum);
    }

    return maxSum;
}

int main() {
    

 int arr[] = {1,-2,5,6,-5,9};
 int n = sizeof(arr)/sizeof(int);

 int sum = kadenAlgo(arr,n);
 cout<< " the sum is "<<sum<<endl;
 return 0; 
}