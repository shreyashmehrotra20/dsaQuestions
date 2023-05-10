#include <iostream>
#include <string>
using namespace std;

class Employee 
    {
        private:
          int height;
          string color;
        public:
          int face , body , lassun = 33;
          
          void setData(string a1 , int b1,int fac, int bdy );
          void getData();
          
    };
void Employee :: setData(string a ,int b, int fac , int bdy)
    {
        color = a;
        height = b;
        face = fac;
        body = bdy;
       
    }
void Employee :: getData()
{
    cout<<"value of color "<<color <<endl;
    cout<<"value of height "<<height <<endl;
    cout<<"value of face "<<face <<endl;
    cout<<"value of body "<<body <<endl;
    cout<<"value of lassun "<<lassun <<endl;
    
}

int main() {
    Employee Doggo;
    Doggo.lassun = 2522;
    Doggo.setData("hey",3,5,6);
    Doggo.getData();
    
    return 0; 
}