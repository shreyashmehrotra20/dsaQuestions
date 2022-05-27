#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr (5,100);
   
    arr.insert(arr.begin()+5,99);
    arr.push_back(23);
    cout<<arr.capacity()<<endl;
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}