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

   // destructor - ye aapne aap chalta hai static obj me - jab us object ka scope khatam ho jaata hai means object ne jo liya tha sab delete ho jaata hai

   ~Shreyash()
   {
    cout<<"Mai destructor hun bhai log";
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

    // note for dynamic object haamko khud hi delete kaarna hoga jo values haamne use ki hain 
    // with help of "delete" keyword

    // delete d; iise destructor dynamic wale ki liye bhi chalega means haame manually delete kaarna hoga dynamic wale ke resource 
    return 0; 
}