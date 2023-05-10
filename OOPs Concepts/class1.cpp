#include <iostream>
using namespace std;

class Animal {

// State or behaviour
  private:

  int weight;

  public:
  int age;
  string name;

  // functionalities properties

  void eat() {
     
     cout<< name + " is eating "<<endl;

  }

  void run() {
     cout<< name + " is running"<<endl;
  }

  //getter and settes concept

  int getWeight()
  {
    return weight;
  }

  void setWeight(int w )
  {
    weight = w ;
  }
};

int main() {
    

    // object creation
    
    // Static obj creation
    Animal dog;
    dog.age = 3;
    dog.name = "Timintu";

    dog.eat();
    dog.run();
    
    // accessing private element
    
    dog.setWeight(101);
    cout<< dog.getWeight();
    return 0; 
}