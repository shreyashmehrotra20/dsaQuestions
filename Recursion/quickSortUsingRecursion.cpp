#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>& arr, int s ,int e)
{
    int pivot = s;
    int count =0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=arr[pivot])
        {
            count++;
        }
    }
    swap(arr[pivot],arr[s+count]);
    pivot = s+count;

    // now 2 phase of step 1  left me pivot se smaller element -> right me pivot se baade element 
    int i=s;
    int j =e;
    while(i<pivot && j>pivot)
    {   
        // case a means when there is no issue pivot element ke left me saare  chotte element  hain and right me saare baade element hain
        while(arr[i]<=arr[pivot])
        {
            i++;
        }

        while(arr[i]>arr[pivot])
        {
            j--;
        }

        // case b if there is an issue means left me koi baade value and right me choti value hai
        if(i<pivot && j>pivot)
        {
            swap(arr[i],arr[j]);
        }
    }

    return pivot;
}
void quickSort(vector<int>& arr, int s ,int e)
{
    // base case 
    if(s>=e)
    {
        return ;
    }

    // partition pivot find kaarke setp 1 kaaro pura
    int p = partition(arr,s,e);
    // recursion relation
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main() {
    //quick sort logic in 2 steps
    
    //1 - partition - in this we will take one pivot element and find its corret location
    // then we will fix elements  -> left me pivot se smaller element -> right me pivot se baade element 

    //2- then left and right part ko recursion sort kaarega 
    vector<int> arr = {8,1,3,4,20,50,40};
    int s=0;
    int e = arr.size()-1;
    quickSort(arr,s,e);

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}