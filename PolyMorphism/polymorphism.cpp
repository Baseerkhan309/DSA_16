#include <iostream>
using namespace std;

// Polymorphism Start
// Function Overloading....

class Print{
public:
    void show(int x){
        cout <<"int :" << x << endl;

    }
    void show(string x){
        cout <<"string :" << x << endl;

    }
};
int main(){

 Print p1;
 p1.show(123);


    return 0;
}