#include <iostream>
#include <climits>
using namespace std; 
// code changed into finf maximum 

int findMini(int arr[],int n,int i,int mini){
    
    // base case
    if(i>n-1){
        return mini;
    }
    // processing ek case solve kaardiya 
    if(arr[i]<mini)
    {
        mini = arr[i];
    }

    // rcursive relation nbakki recursion sambhal lega  
    findMini(arr,n,i+1,mini);

}

int main() {
    int arr[] = {991,79,53,100,50};
    int n =5;
    int i=0;
    int mini = INT_MAX;
    int ans = findMini(arr,n,i,mini);
    cout <<ans;
    return 0; 
}