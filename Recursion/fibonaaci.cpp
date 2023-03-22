#include <iostream>
using namespace std;

int fibo(int n){
     
    // base case 
    if(n==1) return 0;
    if(n==2) return 1;
    
    // recursive call
    int a = fibo(n-1)+fibo(n-2);

    // processing
    return a;
}

int main() {
    
    int n ;
    cout<<"enter number "<<endl;
    cin>>n;
    int ans = fibo(n);
    cout<<"Answer is "<<ans;
    return 0; 
}