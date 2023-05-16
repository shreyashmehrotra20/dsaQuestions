#include <iostream>
#include <vector>
using namespace std;
//In this code we are arranging positive and negative alternatively without using space O(1)


int main() {
    
    int arr[6] = {-1,-2,3,-4,-1,5};
    
    int i=0;
    int n = 6;
    
    int j=n-1;
    while(i<j)
    {
        while(i<n-1 && arr[i]>0)
        {
         i++;
        }
        while(j>0 && arr[j]<0){
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }

        
    }

    int k=0;
    while(k<n && i<n)
    {
       if(arr[k]>0 && arr[i]<0)
       {
        swap(arr[k],arr[i]);
        k+=2;
        i+=1;
       }
    }

    //seeing the results
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    //hhhhhhhhh
    return 0; 
}