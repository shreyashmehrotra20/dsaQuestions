#include <iostream>
#include <algorithm>


using namespace std;
bool compare(int a , int b)
{
    //return a>b;   descending order
    return a<b ;
}
int main() {
    int arr[] = {2,-1,3,9,4,5,-3,7};
    int n = sizeof(arr)/sizeof(int);
    sort(arr,arr+n,compare); // here arr represent position 0 , and it will go till nth position (means end +1 position) normally it sort array in ascending order 
    //printing array

    for(int i =0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}