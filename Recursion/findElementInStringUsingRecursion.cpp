#include <iostream>
using namespace std;

void findElemnent(string str,int len,int i,char key)
{
    if(i>=len)
    {
        return;
    }

    if(str[i]==key)
    {
        cout<<"Key found at "<<i;
    }
    findElemnent(str,len,i+1,key);
}

int main() {
    string str = "ShreyashMehrotra";
    int len = str.length();
    int i=0;
    char key = 'h';
    findElemnent(str,len,i+1,key);
    return 0; 
}