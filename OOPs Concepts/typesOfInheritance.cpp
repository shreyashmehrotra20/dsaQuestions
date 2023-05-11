#include <iostream>
using namespace std;
// single level inheritance 
class Animal {

    public:
        int age;
        int weight;
        string name;
};

class Dog: public Animal {
    
    public :
    void bark (){
        cout<<"Barking"<<endl;
    }

    void setWeight(int w) {
        this->weight  = w;
        cout<<"weight is "<<" " <<this->weight;
    }

};

// multilevel inheritance 

class Fruit {
    
    public:
    string name;
};

class Mango : public Fruit {
     public:
    int age;
};

class Aphanso : public Mango {
     public:
    int weight;
};


// multiple inheritance 

class A {
   public:
   int physics;
};

class B : public A{
   public:
   int chemistry;

};

class C: public B , public A{

   public:
   int maths;
};
int main() {
    // Dog* d1 = new Dog();

    // d1->bark();
    // d1->setWeight(30);

    // Aphanso A;
    // cout<<A.name<<endl;
    // cout<<A.weight<<endl;
    // cout<<A.age;
    C cam;
    cout<<cam.maths << cam.B::chemistry <<  cam.A::physics;
    return 0; 
}