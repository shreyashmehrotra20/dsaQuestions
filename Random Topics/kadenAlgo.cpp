#include<bits/stdc++.h>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int currentSum =0;
    int maxSum = INT_MIN;
    for(int i=0; i<A.size();i++)
    {
        currentSum+=A[i];
        
        if(currentSum>maxSum) 
        {
            maxSum = currentSum;
        }
        if(currentSum<0)
        {
            currentSum=0;
        }
        
    }
    return maxSum;
}


int main()
{
    vector<int> arr = {-1, -2,-3,-4};
    int sum =  maxSumSubarray(arr);
    cout<<sum;
}