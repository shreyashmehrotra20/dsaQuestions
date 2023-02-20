#include <iostream>
#include <vector>
using namespace std;
int findOccuring(vector<int> arr){
   
    int s =0;
    int e=arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(s==e){
            return s;
        }

        if(mid%2==0)
        {
            if(arr[mid]==arr[mid+1])
            {
                s = mid+2;
            }
            else{
                e = mid;
            }

        }

        if(mid%2!=0)
        {
            if(arr[mid]!=arr[mid-1])
            {
                e = mid-1;
            }
            if(arr[mid]==arr[mid-1])
            {
                s = mid+1;
            }
        }
    }

    return -1;
}
int main() {
    vector<int> arr = {1,1,2,2,3,3,4,4,3,600,600,4,4};
    // int n;
    // cout<<"Enter Target"<<endl;
    // cin>>n;
    int ans = findOccuring(arr);
    cout<<"yo";
    cout<<"Answer is "<<ans;
    return 0; 
}