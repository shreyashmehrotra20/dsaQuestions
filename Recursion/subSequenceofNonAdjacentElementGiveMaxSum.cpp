#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void nonAdMax(vector<int>& arr, int n , int i, int sum , int& maxi)
{
    if(i>=n)
    {
        maxi = max(sum,maxi);
        return;
    }

    // include 
    nonAdMax(arr,n,i+2,sum+arr[i],maxi);
    //exclude
    nonAdMax(arr,n,i+1,sum,maxi);
}
int main() {
    vector<int> arr = {2,5,7,9};
    int n = arr.size();
    int i=0;
    int sum =0;
    int maxi = INT_MIN;
    nonAdMax(arr,n,i,sum,maxi);
    cout<<"And is "<<maxi;
    return 0; 
}