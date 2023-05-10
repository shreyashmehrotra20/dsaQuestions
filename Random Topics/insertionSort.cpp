#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int> arr)
{
    int n = arr.size();
    for(int i =1;i<n;i++)
    {
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 && current<arr[prev])
        {
            arr[prev+1]= arr[prev];
            prev-=1;
        }
        arr[prev+1]= current;
    }

    for(int i = 0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() {
    vector<int> arr = {2,4,3,8,6,7};
    insertionSort(arr);
    return 0; 
}