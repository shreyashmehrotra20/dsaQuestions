#include <iostream>
using namespace std;


// operator overloading 
class Param {
    
    public:
    int val;
    
    // current obj1 
    void operator +(Param& obj2) {

        int val1 = this->val; // this will give value of obj1.val;
        int val2 = obj2.val;

        cout<< "Difference is " <<val2-val1<<endl;
    }
};
int main() {

    Param obj1,obj2;
    obj1.val = 45;
    obj2.val= 50;

    obj1+obj2;
    
    return 0; 
}