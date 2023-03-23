#include <iostream>
using namespace std;

void findDigit(int number, int a)
{
    if(number==0)
    {
        return ;
    }

    a=number%10;
    cout<<a<<endl;
    number=number/10;

    findDigit(number,a);
}

int main() {
    int number = 0375;
    // if(number==0)
    // {
    //     return 0;
    // }
    int a =0;
    findDigit(number,a);
    return 0; 
}