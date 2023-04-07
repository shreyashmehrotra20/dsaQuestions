#include <iostream>
using namespace std;

class Shreyash {
   
   public:
   int age;
   int weight;
   string name;
   
   // note return type nahi hota constructir me

   //default constructor
   Shreyash()
   {
    this->age =0;
    this->weight =0;
    this->name="";  
    cout<<" chal bhaiya"<<endl;
   }

   // parametrized constructor 

   Shreyash(int age)
   {
    this->age =age;
    this->weight =0;
    this->name="";  
    cout<<" chal bhaiya B wala constructor"<<endl;
   }

   //copy constructor -  when we copy any object then this constructor is invoked 
   // isme ham object pass kaarte hain by reference (reason kyunki pass by value kaarenge then copy banege obj ki then again copy constructor call hoga to ye ek loop me fass jayega )

   Shreyash(Shreyash& obj)
   {
    this->age = obj.age;
    this->weight = obj.weight;
    this->name= obj.name;
    cout<<"I am a copy constructor "<<endl;

   }


};

int main() {
    Shreyash a;
    Shreyash b(21);
    cout<< b.age<<endl;
    Shreyash c(b);// isko aise bhi kaar sakte hain Shreyash c = b;

    // by using heap creation of object

    Shreyash* d = new Shreyash;
    d->age = 20;
    cout<<d->age;
    return 0; 
}