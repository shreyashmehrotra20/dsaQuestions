#include <iostream>
using namespace std;

class Shreyash {
    
    private:
    int weight;
    public:

    int age;
    string name;

    
    void print()
    {
        cout<<"name is "<<name<<endl;
        cout<<"Weight is "<<weight;
        
    }
    // gettter 
    int getWeight()
    {
        return weight;
    }
    //setter
    int setWeight(int w)
    {
        weight = w;
        
    }

   
    
};

int main() {
    
     Shreyash allu;
    allu.age =20;
    allu.name = "Alluhai";
    cout<<allu.age<<endl;
    cout<<allu.name<<endl;
    
    allu.getWeight();
    allu.setWeight(108);
    allu.print();

     //dynamic memory allocation using heap

    Shreyash* godfather = new Shreyash;

    way 1 to use dynamic 
    (*godfather).name = "Shreyash";
    (*godfather).age = 21;
    (*godfather).print();


    // way 2 to use dynamic

    godfather->name ="lallan";
    godfather->age =199;
    godfather->print();
    return 0; 
}