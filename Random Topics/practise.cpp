#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n ;
    cout<<"enter value of n";
    cin>>n;
    int A[n];
    for(int i =0 ; i<=n  ; i++) 
    {
        cin>>A[i];
    } 
    // reverse of array 
    for (int i = n; i>=0 ; i--)
    {
        cout<<" "<<A[i];
    }
    return 0;
}