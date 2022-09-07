#include <iostream>
#include <limits.h>
using namespace std;
void findMax(int arr[],int index,int &maxi)
{
    if(index<0)
    {
        return ;
    }
    maxi = max(maxi,arr[index]);
    findMax(arr,index-1,maxi);
}
int main() {
    
    int maxi = INT_MIN;
    int arr[] = {3,4,5,6,1,2,9,23,89,12,34,90,234};
    int n =sizeof(arr)/sizeof(int);
    findMax(arr,n-1,maxi);
    cout<< maxi;
    return 0; 

}