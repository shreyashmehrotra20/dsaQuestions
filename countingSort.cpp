#include <iostream>
#include <vector>
using namespace std;
void countSort(vector<int> arr)
{  

   
   int n = arr.size();
   int largest = -1;
   for(int i=0;i<n;i++)
   {
       largest = max(arr[i],largest);
   }
   
   vector<int> arr1(largest+1,0); // counting array
   
   for(int i =0 ;i<n;i++)
   {
       arr1[arr[i]]++;
   }

   int j =0 ;// pointer for the original aaray
   for(int i=0;i<=largest;i++)
   {
        while(arr1[i]>0)
        {
            arr[j]= i;
            arr1[i]--;
            j++;
           
        }
   }

   for(int j=0;j<n;j++)
   {
       cout<<arr[j]<<" ";
   }

}

int main() {
    vector<int> arr = {1,3,4,2,2,5,9,8};
    countSort(arr);
    return 0; 
}