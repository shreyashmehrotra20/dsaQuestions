#include <iostream>
using namespace std;
class Animal {
     
     private :
     string name;
     int age;
     int weight;
     Animal() {
        this->name="Shreyash";
        this->age=20;
        this->weight=108;
     }
     void eat()
     {
        cout<<"eating";
     }
};

class dog:protected Animal {
     
     public:
     void dogInfo() {

        cout<<this->age;
     }
};

int main() {
    dog d1;
    // cout<<d1.age;
    d1.dogInfo();
    return 0; 
}