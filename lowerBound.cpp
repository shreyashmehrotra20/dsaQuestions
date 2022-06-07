#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;




int lowerBound(vector<int> A, int Val) {
    int start = 0 ;
    int end = A.size()-1 ;
    int mid;
    int answer = 0;
    while (start<=end)
    {
        mid = (start+end)/2;
        if(A[mid]==Val)
        {   
          
            return mid ;
        }
        else if(A[mid]>Val)
        {
          
            end = mid -1;
        }
        else
        {
          answer = A[mid];
          start = mid +1;
        }
    }
    return answer ;
}

    

int main() {
    vector<int> A ={-1,-1,2,3,5};
    int Val = 0;
    int Value = lowerBound(A,Val);
    cout<<"the value is "<<Value;
    return 0; 
}