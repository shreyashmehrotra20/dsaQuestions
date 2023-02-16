#include <iostream>
using namespace std;

int main() {
    

    for(int row =1;row<6;row++)
    {
        for(int col=1;col<row+1;col++)
        {
            cout<<col;
        }
        cout<<endl;
    }
    return 0; 
}