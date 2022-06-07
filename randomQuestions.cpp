#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
    // your code  goes here
    int n = v.size();
    for (int i = 0; i < n-1; i++)
   {
     bool swapped = false;
     for (int j = 0; j < n-i-1; j++)
     {
        if (v[j] > v[j+1])
        {
           swap(v[j], v[j+1]);
           swapped = true;
        }
     }
        
        if(swapped == false)
        {
            return v;
        }
       
    }
    
    
    return v;
    
}
int main() {
    vector<int> arr = {2,5,7,6,4,8} ;
    vector<int> a = optimizedBubbleSort(arr);
    for(int i =0; i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0; 
}