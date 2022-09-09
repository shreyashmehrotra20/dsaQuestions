#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findAllOccurance(int arr[], int index, int size,int value,vector <int>&a)

{
  if(index==size)
  {
    return;
  }

  if(arr[index]==value)
  {
    a.push_back(index);
  }
    return findAllOccurance(arr,index+1,size,value,a);
}


int main() {
    int arr[] = {3,4,5,6,1,2,1,2,3,4,5,5};
    vector<int> a;
    int value = 4;
    int n = 12;
    findAllOccurance(arr,0,n,value,a);

    for(int i =0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0; 
}