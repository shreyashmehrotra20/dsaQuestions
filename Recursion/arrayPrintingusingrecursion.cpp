#include <iostream>
#include <climits>
using namespace std; 
// code changed into finf maximum 

int arrPrinting(int arr[],int n,int i,int maxi){
    
    // base case
    if(i>n-1){
        return maxi;
    }
    // processing ek case solve kaardiya 
    if(arr[i]>maxi)
    {
        maxi = arr[i];
    }

    // rcursive relation nbakki recursion sambhal lega  
    arrPrinting(arr,n,i+1,maxi);

}

int main() {
    int arr[] = {991,0,5,100,50};
    int n =5;
    int i=0;
    int maxi = INT_MIN;
    int ans = arrPrinting(arr,n,i,maxi);
    cout <<ans;
    return 0; 
}