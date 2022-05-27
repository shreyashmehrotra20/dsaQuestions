#include <iostream>
using namespace std;

int subArraySum(int arr[] , int n )
{   

    int largestSum = 0;
    for(int i =0 ; i<n; i++)
    {   
        for(int j =i;j<n;j++)
        {   
            int sum = 0 ;
            for(int k =i ; k<=j ; k++)
            {
                sum += arr[k];
            }
            largestSum = max(largestSum,sum);
        }
        
    }
    return largestSum;
}
int main() {
    int arr[]= {-1,3,-5,6,7,-1,-2};
    int n = sizeof(arr)/sizeof(int);

    int sumLargest = subArraySum(arr,n);
    cout <<sumLargest;
    return 0; 
}