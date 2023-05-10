#include <iostream>
using namespace std;

class Complex 
{
  int a ,b ;
  public :
    Complex(void);
    void printvalue(void) {
        cout<<"the number is "<<a<<" + "<<"i "<<b<<endl;
    };
};
Complex :: Complex(void)
{
   a=0;
   b=0;
   cout<<"oyee hooye"<<endl;
};
int main() {
    Complex a1,a2,a3;
    a1.printvalue();
    a2.printvalue();
    a3.printvalue();
    return 0; 
}