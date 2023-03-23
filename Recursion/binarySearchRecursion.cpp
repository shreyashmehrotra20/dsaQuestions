#include <iostream>
#include <vector>
using namespace std;

int binSearch(vector<int> &arr,int& n,int s , int e , int& key)
{   
    int mid = (e-s)/2 + s;
    // base case
    if(s>e)
    {
        return 0;
    }
    // processing 
    if(arr[mid]==key)
    {
        return mid;
    }
    // recursion processing

    if(arr[mid]<key)
    {
        return binSearch(arr,n,s+1,e,key);
    }
    else{
        return binSearch(arr,n,s,e-1,key);
    }
}

int main() {
    vector<int> arr = {5,10,15,45,65,78};
    int n = arr.size()-1;
    int s =0;
    int e = n;
    cout<<"Enter the key "<<endl;
    int key;
    cin>>key;
    int ans = binSearch(arr,n,s,e,key);
    if(ans==0)
    {
        cout<<"Not Found";
    }
    else{
        cout<<"The position is "<<ans;
    }
    
    return 0; 
}