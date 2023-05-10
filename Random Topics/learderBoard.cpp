#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10,20,3,5,0};
    int n = arr.size();

    for(int i =0 ; i<n;i++)
    {   int maxi ,count ;
        for(int j =i; j<n;j++)
        {
            maxi = max(arr[i],arr[j+1]);
            if(arr[i]!=maxi)
            {
                count = 0;
            }
            else
            {
                count =1;
                break;
            }
            
        }
        if(count ==0)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    cout<<"hello";
    return 0; 
}