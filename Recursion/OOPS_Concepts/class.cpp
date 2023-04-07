#include <iostream>
using namespace std;

class Shreyash {
    
    public:

    int age;
    string name;

    void print()
    {
        cout<<"name is "<<name;
    }
};

int main() {
    
    Shreyash allu;
    allu.age =20;
    allu.name = "Alluhai";
    cout<<allu.age<<endl;
    cout<<allu.name<<endl;
    allu.print();
    return 0; 
}