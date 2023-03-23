#include <iostream>
using namespace std;
void subSeq(string str, string output,int i,int& n)
{
    // base case
    if(i>=n)
    {
        cout<<output<<" ";
        return;
    }
    // recursive statement 
    // one imp note that why we wrote exclude above include bcz agar ham include phele likhte to j haamne change kiya hai output vo hame  pop kaarna padta kyunki exclude wale case me haaam direct value print kaarte hai without addition
    // exclude
     subSeq(str,output,i+1,n);
    // include
    output = output+str[i];
     subSeq(str,output,i+1,n);
}

int main()
{   
    string str = "abc";
    string output = "";
    int i=0;
    int n = str.length();
    subSeq(str,output,i,n);
    return 0;
}