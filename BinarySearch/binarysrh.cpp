#include <iostream>
using namespace std;
int binarySearch(vector<int> &arr,int key)

{   
    int start =0;
    int end = arr.size();
    int mid = start + (end-sum)/2
    while (start<=end){
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(key>mid)
    {
        start = mid +1;
    }
    else {
        end = mid-1;
    }
    }
    return -1;

}

int main() {
    
    vector<int> arr = {1,2,3,4,5,6,7};
    int key = 7;
    int ans = binarySearch(arr,key);
    cout<<ans;
    return 0; 
}