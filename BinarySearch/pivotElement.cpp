#include <iostream>
#include <vector>
using namespace std;
int pivotElement(vector<int> arr)
{
    int s=0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]>arr[mid+1])
        {
            return mid;
        }
        if(arr[mid-1]>arr[mid])
        {
            return mid-1;
        }

        // normal search
        if(arr[0]<arr[mid])
        {
            s=mid+1;
        }
        else{
            mid-1;
        }
    }

    return -1;
}
int main() {
    vector<int> arr = {6,7,1,2,3,4,5};
    int ans = pivotElement(arr);
    cout<<"The pivot element is"<<ans;
    return 0; 
}