#include <iostream>
#include <string>
using namespace std;

// Copy Constructor 

class Car{

    public:
    string name;
    string color;

    Car(string name, string color){
        this->color = color;
        this->name = name;

    }

// Custom Copy Constructor....
    Car(Car &custom){
        cout << "Copying Original to New ...\n" ;
        name = custom.name;
        color = custom.color;

    }

};

int main(){

    Car c1("baseer khan","blue");
    Car c2(c1);

        cout << c2.name << endl;
        cout << c2.color << endl;


    return 0;
}