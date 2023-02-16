#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter row"<<endl;
    cin>>n;

     
    // pattern 1
    // for(int row =1;row<n;row++)
    // {

    //     if(row ==1 || row ==2 || row == n-1)
    //     for(int col=1;col<row+1;col++)
    //     {
    //         cout<<col;
    //     }
    //     else {
    //         for(int col=1;col<row+1;col++)
    //         {
    //             if(col==1 || col==row)
    //             {
    //                 cout<<col<<" ";
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }

    // pattern 2 
     for(int row =0;row<n;row++)
    {   
        for(int col=row+1;col<n+1;col++)
        {  
            if(col==row+1 || col==n || row ==0)
            {
                cout<<col;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
       

        
    

    return 0; 
}