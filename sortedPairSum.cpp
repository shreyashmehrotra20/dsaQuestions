#include <iostream>
#include<bits/stdc++.h>
using namespace std;



pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
     int start = 0;
     int end = arr.size()-1 ;
     int diff = INT_MAX;
     int val1 , val2 ;
     while(start<end)
     {
         if(abs(arr[start]+arr[end]-x)<diff)
         {
             val1 =start;
             val2 = end;
             diff = abs(arr[start]+arr[end]-x);
             
             
         }
         if((arr[start]+arr[end])>x)
         {
             end--;
         }
         else
         {
             start++;
         }
     }
     cout<<"the values are "<<arr[val1]<<" and "<<arr[val2];
}
int main() {
    vector<int> arr = {10,20,30,40,45,60};
    int x = 86;
    closestSum(arr,x);
    return 0; 
}