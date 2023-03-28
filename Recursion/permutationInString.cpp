#include <iostream>
using namespace std;

void perString(string &str,int i)
{
    if(i>=str.length())
    {   
        cout<<str<<" ";
        return ;
    }


    for(int j=i;j<str.length();j++)
    {    
         swap(str[i],str[j]);
         perString(str,i+1);

         // backtracking  jo changes kiyen hain unko sahi kaardo
         

         swap(str[i],str[j]);
    }
}
int main() {
    
    string str = "abc";
    int i=0;
    perString(str,i);
    return 0; 
}