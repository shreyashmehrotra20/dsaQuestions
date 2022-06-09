#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int pairSticks(vector<int> length, int D)
{    int count = 0;
     int n = length.size();
     sort(length.begin(),length.end());
     for(int i =0;i<n;i+=2)
     {
           
           
               if(abs(length[i]-length[i+1])<=D)
                {   
                   cout<<length[i]<<" "<<length[i+1]<<endl;
                   count++;
                }
               
           
     }
      for(int i =0;i<n;i++)
      {
          cout<<length[i]<<" ";
      }
     return count;
}
int main() {
    vector<int> arr = {1,3,3,9,4,5,7,8,9,8,9,8,10};
    int D = 1;
    int n = pairSticks(arr,D);
    cout<<" the pairs are "<< n;
    return 0; 
}