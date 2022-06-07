#include <iostream>
#include <vector>
using namespace std;
int swapAlternative(vector<int> &arr)
{
    for(int i =0;i<arr.size();i+=2)
    {   
        if(i+1<arr.size())
        {
        swap(arr[i],arr[i+1]);
        }
    }

    return 0 ;
}
int main() {
    vector<int> arr = {1,3,2,7,11};
    //before swaping 
     for(int i =0 ; i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    swapAlternative(arr);
    //after swaping 
    cout<<endl;
    for(int j =0 ; j<arr.size();j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0; 
}