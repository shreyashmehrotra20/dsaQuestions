#include <iostream>
using namespace std;
void cpp(int arr[], int n , int vin , int frn)
{   
    int i =0;
    while(i<n)
    {
        vin = max(arr[0],arr[n-1-i]);

        ++i;
        frn = max(arr[0],arr[n-1-i]);
        ++i;
    }
    cout<<vin<<" "<<frn;
}
int main() {
     int arr[]= {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(size);
    int vin =0;
    int frn = 0;
    cpp(arr,size,vin,frn);
    
    return 0; 
}