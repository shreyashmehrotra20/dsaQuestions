#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    // int row = 2;
    // int col = 2;

    // int** arr = new int*[row];
    // for(int i=0;i<row;i++)
    // {
    //     arr[i] = new int [col];
    // }

    // for(int i=0;i<row;i++)
    // {
    //    for(int j=0;j<col;j++)
    //    {
    //     arr[i][j] = 0;
    //    }
    // }

    // for(int i=0;i<row;i++)
    // {
    //    for(int j=0;j<col;j++)
    //    {
    //     cout<<arr[i][j]<<" ";
    //    }
    //    cout<<endl;
    // }

    // by using vector same thing 

    vector<vector<int>> arr (3,vector<int>(6,0));

    for(int i=0;i<3;i++)
    {
      for(int j=0;j<6;j++)
      {
        arr[i][j] = 0;
      }
    }

    for(int i=0;i<3;i++)
    {
      for(int j=0;j<6;j++)
      {
       cout<< arr[i][j] <<" ";
      }

      cout<<endl;
    }

    // vector<vector<int>> (row_size,vector<int> (col_size,intilization))  syntax for dynamic 2d array
    return 0; 
}