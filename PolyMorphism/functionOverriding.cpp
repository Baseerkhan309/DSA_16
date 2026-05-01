#include <iostream>
using namespace std;

// Function Overriding....
class parent{
    public:
    void show(){
        cout <<" Parent Class Function \n";
    }
    virtual void hello(){
        cout << " parent Hello \n";

    }
};

class Child : public parent{
 public:
 void show(){
    cout << "Child Class Function\n";
 }

  void hello(){
        cout << " child Hello \n";
        
    } 
};

int main(){
Child c1;
parent *ptr;
ptr = &c1;
ptr->hello();



    return 0;
}