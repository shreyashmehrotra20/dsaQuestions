#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5,6,7,8,9}; 
    // int *n = &arr
    // pointer approch
    cout<<&arr<<endl;
    cout<<&arr+1<<endl;
    cout<<*(arr+1);
    return 0; 
}