#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;



int lowerBound(vector<int> A, int Val) {
    int start = 0 ;
    int end = A.size()-1 ;
    int mid;
    bool flag = false ;
    while (start<=end)
    {
        mid = (start+end)/2;
        cout<<"bahr wala moid hai"<<mid<<endl;
        if(mid==Val)
        {   cout<<"andar wala mid hai"<<mid<<endl;
            flag = true;
            return mid ;
        }
        else if (mid<Val)
        {
            start = mid+1;
        }
        else if(mid>Val)
        {
            end = mid-1;
        }
    }
    
    if(flag==false)
    {
     return lowerBound(A,(Val-1));
    }
    
    
}
int main() {
    vector<int> A = {0,1,3,7};
    int Val = 4;
    int Value = lowerBound(A,Val);
    cout<<"the value is "<<Value;
    return 0; 
}