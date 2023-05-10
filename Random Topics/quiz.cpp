#include <iostream>
#include <cmath> 
using namespace std;

class Distance 
{  
   static int number;
   int x, y ;
   public:
    friend float distanceFormala(Distance , Distance );
    Distance(int a ,int b);
    void printvalue(void)
    {
      cout<<"point " <<number+1<<" is ( "<<x<<" , "<<y<<" )"<<endl;
      number++;
    };
};  
Distance:: Distance(int a , int b)
{
  x=a;
  y=b;
};
float distanceFormala (Distance q1 , Distance q2) 
{
   return sqrt(( pow((q1.x - q2.x),2) + pow((q1.y - q2.y),2) ));
};

int Distance :: number = 0;
int main() 
{
    Distance q1(5,8) ,q2(2,1) ;
    q1.printvalue();
    q2.printvalue();
    float l = distanceFormala(q1 ,q2);
    cout<<"the distance is "<<l<<endl;
    return 0; 
}