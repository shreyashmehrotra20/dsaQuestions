#include<bits/stdc++.h>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int currentSum =0;
    int maxSum = INT_MIN;
    for(int i=0; i<A.size();i++)
    {
        currentSum+=A[i];
        if(currentSum<A[i])
        {
            currentSum = A[i];
        }
        
        maxSum = max(currentSum,maxSum);
    }
    return maxSum;
}