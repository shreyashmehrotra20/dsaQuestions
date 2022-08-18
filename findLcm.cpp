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
int main()
{   
    int a , b;
    cout<<"enter numbers for lcm"<<endl;
    cin>>a>>b;
    int ans = lcm(a,b);
    cout<<"Answer "<<ans;
    return 0;
}