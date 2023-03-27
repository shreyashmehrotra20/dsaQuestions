#include <iostream>
using namespace std;

void merging(int arr[], int& n,int s ,int e,int mid)
{
    int size1 = mid-s+1;
    int size2 = e-mid;
    int* left = new int[size1];
    int* right =new int[size2];
    int k=s;
    // left sorted array baanao
    for(int i=0;i<size1;i++)
    {
        left[i] = arr[k++];
    }

    // right sorted array baanao 
    k=mid+1;
    for(int i=0;i<size2;i++)
    {
        right[i] = arr[k++];
    }

    // merging left and right sorted array 
    int i1= 0;
    int i2= 0;
    int ac = s;
    while(i1<size1 && i2<size2)
    {
        if(left[i1]<right[i2])
        {
            arr[ac++]=left[i1++];
        }
        else{
            arr[ac++]=right[i2++];
        }
    }

    while(i1<size1)
    {
        arr[ac++]=left[i1++];
    }
    while(i2<size2)
    {
        arr[ac++] =right[i2++];
    }
}

void mergeSort(int arr[ ], int& n,int s ,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid = (e-s)/2 +s;
    //left break
    mergeSort(arr,n,s,mid);
    //right break
    mergeSort(arr,n,mid+1,e);

    // merging
    merging(arr,n,s,e,mid);
}

int main() {
    int arr[] = {2,2,2,2,9,3,3,3,3,7,33,8,41};
    int n =13;
    int s=0;
    int e = n-1;
    mergeSort(arr,n,s,e);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}