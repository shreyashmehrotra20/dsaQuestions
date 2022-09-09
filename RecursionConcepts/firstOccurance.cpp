#include <iostream>
using namespace std;
int firstOccurance(int arr[], int index , int size , int target)
{
    if(index==size)
    {
        return -1;
    }
    if(arr[index]==target)
    {
        return index;
    }
    firstOccurance(arr,index+1,size,target);
}

int main()
{
    int arr[] = {3, 4, 5, 6, 1, 2, 1, 2, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(int);
    int target;
    cin>>target;
    int a = firstOccurance(arr, 0, n,target);
    cout<<a;
    return 0;
}