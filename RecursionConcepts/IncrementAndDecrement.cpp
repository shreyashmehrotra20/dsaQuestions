 #include <iostream>
 using namespace std;

void Dec(int n)
 {
    if(n==0)
    {
        return ;
    }
    cout<<n<<" ";
    Dec(n-1);
    cout<<n<<" ";
 }
 
 int main() {
    int n =5;
    Dec(n);
    return 0; 
 }