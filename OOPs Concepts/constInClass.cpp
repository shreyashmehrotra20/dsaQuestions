#include <iostream>
using namespace std;

class Arr {
    
    public:
    int a =5;
    int b=10;

    void Ar() const {
        b = 9;
        cout<<"Hello";
    }
};
int main() {
    Arr a;
    a.Ar();
    return 0; 
}