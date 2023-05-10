#include <iostream>
using namespace std;
class Comp {
        int a , b ;
        public :
            
            friend Comp sumComplex(Comp q1 , Comp q2);
            void setValue(int r1 , int r2)
            {
                a =  r1 ;
                b =  r2 ;

            }
            void printValue(void);
        
};
Comp sumComplex (Comp c1 , Comp c2) 
{
   Comp q3 ;
   q3.setValue(( c1.a + c2.a),( c2.b + c2.b));
   return q3;
};
void Comp :: printValue(void) 
{
        cout <<"the complex number is "<<a<<" + "<<b<<" i"<<endl;
};

   
int main() {
    Comp q1 , q2 , sum;
    q1.setValue(9,2);
    q1.printValue();
    q2.setValue(3,2);
    q2.printValue();
    sum = sumComplex(q1,q2);
    sum.printValue();
    return 0; 
}