#include <iostream>
using namespace std;

class Complex;

class Calc {

   public: 
   int sumrealValue(Complex , Complex);
   int sumImgValue(Complex , Complex);

};
class Complex {
    int a ;
    int b ;
    //friend int Calc::sumrealValue(Complex , Complex);
    //friend int Calc::sumImgValue(Complex , Complex);
    friend class Calc;
    public:
      void setValue( int r1 , int r2) 
      {
          a = r1 ;
          b = r2 ;
      }
      void getValue(void)
      {
          cout<<"the complex number is "<< a <<" + "<<"i "<<b<<endl;
      }
};
int Calc ::sumrealValue (Complex o1 , Complex o2) 
{
    return (o1.a + o2.a);
}
int Calc::sumImgValue(Complex q1 , Complex q2)
{
    return (q1.b + q2.b);
}


int main() {
    Complex q1 , q2 ;
    q1.setValue(3,4);
    q1.getValue();

    q2.setValue(5,6);
    q2.getValue();

    Calc a1;
    int s = a1.sumrealValue(q1,q2);
    cout <<"the integer value is "<<s<<endl;

    int i = a1.sumImgValue( q1, q2);
    cout<<"the imaginary value is "<<i<<endl;
    return 0; 
}