#include <iostream>
using namespace std;
int uniqueSolution(int arr[], int n)
{   
    int pointer = 0;
    for(int i=0;i<n/2;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(arr[i]==arr[j])
           {
               pointer ++;
           }
        }
    }
    return pointer ;

}
int main() {
    int arr[] = {3,7,2,2,7,3,4};
    int n = sizeof(arr)/sizeof(int);
    int value = uniqueSolution(arr,n);
    cout<<"the unique value is "<<arr[value];
    return 0; 
}