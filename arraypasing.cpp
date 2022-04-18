#include <iostream>
using namespace std;

class emp  {
   int a ;
   public:
    void getData(void) {
        cout<<"enter value f ur choics"<<endl;
        cin>>a;
    }
    void setData(void);
};
void emp :: setData(void) {
    cout<<"the value u inserted"<<endl;
    cout<<a;
}
int main() {
    emp Oye;
    Oye.getData();
    Oye.setData();
    return 0; 
}