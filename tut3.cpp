#include <iostream>
using namespace std;

int main() {
    cout<<"hello world";
    int a = 3;
    int *b = &a;
    cout<<"the address of a is "<<b<<endl;
    cout<<"the value at a "<<a<<endl;
    cout<<"the address value which b has "<<*b<<endl;
    return 0; 
}