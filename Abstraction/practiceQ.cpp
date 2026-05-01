#include <iostream>
using namespace std;

// Predict The OutPut...
class Parent{
    public:
    Parent(){
        cout << " Parent Constructor Called\n";
    }
    ~Parent(){
        cout << "Parent Destructor Called\n";
    }
};

class Child : public Parent{

    public:
    Child(){
        cout << "Child Constructor Called \n";

    }
    ~Child(){
        cout << "Child Destructor Called\n";
    }

};

int main(){
Child c1;


    return 0;
}
