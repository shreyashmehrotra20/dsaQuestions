#include <iostream> 
#include <typeinfo>
using namespace std ;
int c = 56;
int main () 
{   
    int a ,b,c=35;
    float d = 12.25;
    /*
    cout<<"enter vvalue of a";
    cin>>a;
    cout<<"enter value of b";
    cin>>b;
    

    cout<<"hence the sum is "<<a+b;
    */
    cout<<"c value inside scope "<<c<<endl;
    cout<<"c value outside scope "<<::c<<endl;
    cout<<"value"<< typeof(d);
    return 0;
}