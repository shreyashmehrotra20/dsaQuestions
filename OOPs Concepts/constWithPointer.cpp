#include <iostream>
using namespace std;

int main() {
    const int a = 5;
    cout<<a;
    a = 10;

    can change pointer location or which variable it will point
    const int *a = new int(3);
    cout<<*a;

    // can change content of pointer but can't change the location or whoch variable it will point

    int *const a = new int(10);
    *a = 20;
    cout<<*a;

    // can't change both value and and the pointer location

    const int *const a = new int(10);

    *a = 20;
    cout<<*a;

    return 0; 
}