#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int> arr)
{  int n = arr.size();
   for(int i =0;i<n-1;i++) // i<n-1 because last element will be automatically sorted ,in this loop we are traversing whole array
   {  
     
      int min_position = i;
      for(int j =i;j<n;j++) // this loop is for finding the minimum element
      {
           if(arr[j]<arr[min_position])
           {
                min_position = j;
           }
      }
      swap(arr[i],arr[min_position]); // then we swap 
   }
   for(int i =0 ; i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
}
int main() {
    vector<int> arr = {2,4,1,3,7,5,6};
    selectionSort(arr);
    return 0; 
}