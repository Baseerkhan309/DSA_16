#include <iostream>
using namespace std;

// Predict The OutPut ....
class Base{
public:
    virtual void print(){
        cout << "Base Class \n";
    }
};

class Derived : public Base{
public:
    void print(){
        cout << "Derived Class \n";

    }
};

int main(){

    Base *b = new Derived();
    b->print();
    delete b;
    return 0;
}