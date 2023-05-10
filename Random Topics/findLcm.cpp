#include <iostream>
using namespace std;

// brute force appproch
int lcm(int num1, int num2)
{
    int res = max(num1, num2);
    while (true)
    {
        if (res % num1 == 0 && res % num2 == 0)
        {
            return res;
        }

        res++;
    }
}


// optimized solution 
// IN THIS SOLUTION WE WILL SEE ONE FORMULA THAT IS LCM(A,B) = A*B/GCD(A,B) 
int gcd(int num1,int num2)
{
    if(num2==0)
    {
        return num1;
    }
    else{
        return gcd(num2,num1%num2);
    }
}
int optlcm(int num1, int num2)
{
      int lcm = (num1*num2)/gcd(num1,num2);
      return lcm;
}
int main()
{   
    int a , b;
    cout<<"enter numbers for lcm"<<endl;
    cin>>a>>b;
    int ans = optlcm(a,b);
    cout<<"Answer "<<ans;
    return 0;
}