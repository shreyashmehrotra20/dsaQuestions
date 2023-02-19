#include <iostream>
using namespace std;

int dividetnumber(int divisor,int divident)
{
    int s =0;
    int e = divisor;
    int mid = s+(e-s)/2;
    int ans=0;
    while(s<=e)
    {
        if(abs(mid*divisor)==abs(divident))
        {
            ans = mid;
        }

        if(abs(mid*divisor)<abs(divident))
        {
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }

        mid = s+(e-s)/2;
    }

    if(divisor<0 && divident<0 || divisor>0 && divident>0)
    {
        return ans;
    }

    else{
        return -ans;
    }
}

int main() {
    int divisor = 32;
    int divident = 64;
    int ans = dividetnumber(divisor,divident);
    cout<<"Answer is "<<ans;
    return 0; 
}