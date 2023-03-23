#include <iostream>
using namespace std;

bool checkSorted(int arr[], int& n , int& i)
{
    // base case
    if(i==n-1)
    {
        return true;
    }
    // processing 
    if(arr[i+1]<arr[i])
    {
        return false;
    }
    // recursive relation
    int val =i+1;
    checkSorted(arr,n,val);

}

int main() {
    int arr[] = {4,3,1,2,4,4};
    int n = 6;
    int i=0;
    bool ans = checkSorted(arr,n,i);
    cout<<ans;
    return 0; 
}