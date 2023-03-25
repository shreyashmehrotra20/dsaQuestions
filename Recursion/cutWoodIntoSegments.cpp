#include <iostream>
#include <limits.h>
using namespace std;

int segmentWood(int sizeWood,int& x,int& y,int& z)
{
  if(sizeWood==0)
  {
    return 0;
  }
  if(sizeWood<0)
  {
    return INT_MIN;
  }

  int ans1 = segmentWood(sizeWood-x,x,y,z)+1;
  int ans2 = segmentWood(sizeWood-y,x,y,z)+1;
  int ans3 = segmentWood(sizeWood-z,x,y,z)+1;

  int a = max(ans1,max(ans1,ans2));

  return a;

}

int main() {
    int sizeWood = 7;
    int x =5;
    int y=2;
    int z =2;
    int ans = segmentWood(sizeWood,x,y,z);
    if(ans<0)
    {
        cout<<0;
    }
    else{
        cout<<" Answer is "<<ans;
    }
    return 0; 
}