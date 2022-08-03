#include <iostream>
using namespace std;


// this approch has time complexity of big of n  
/*
double recursion(int n)
{
    if(n==0)
    {
        return 1;
    }

    return n* recursion(n-1);
}
int trailZero(int n)
{
     int number = recursion(n);
     cout<<number<<endl;
     int count =0;
     while(number>0)
     {
     if(number%10== 0)
     {
        ++count;
     }
     number=number/10;
     }
     return count;
}


*/
// this approch is having log(n) approch 

int trailZeroNewApproch(int n)
{
    int res=0;
    for(int i =5;i<=n;i=i*5)
    {
        res = res + n/i;
    }
    return res;
}
int main() {

    int a = 251;
    /*
    int total_Zero=trailZero(a);
    cout<<total_Zero;
    */
    int no_ofZeros =  trailZeroNewApproch(a);
    cout<<no_ofZeros;
    return 0; 
}