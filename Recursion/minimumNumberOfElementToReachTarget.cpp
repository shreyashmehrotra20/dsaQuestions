#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int minNumber(vector<int>& arr, int target)
{
    int mini = INT_MAX;
    if(target==0)
    {
        return 0;
    }

    if(target<0)
    {
        return INT_MAX;
    }

    for(int i=0;i<arr.size();i++)
    {
        int ans = minNumber(arr,target-arr[i]);
        cout<<ans<<" ";
        if(ans!=INT_MAX)
        mini = min(ans+1,mini);
    }
    return mini;
}

int main() {
    vector<int> arr = {1,2};
    int target =3;
    int ans = minNumber(arr,target);
    cout<<endl;
    cout<<" The answer is "<<ans;
    return 0; 
}