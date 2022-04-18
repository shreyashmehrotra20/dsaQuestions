#include <iostream>
using namespace std;

int main() {
    int array[3] = {2,3,5};
    cout<<"the address of 1 value will be "<<endl;
    int* p = array;
    cout<<*(p+1)<<endl;
    return 0; 
}