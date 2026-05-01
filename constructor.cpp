#include <iostream>
#include <string>
using namespace std;

// Constructor // Constructor Overloading 


class car
{

    string name;
    string color;

public:
    car()
    {
        cout << "constructor without param is called ....";
    }
    car(string nameVal, string colorVal)
    {
        cout << "constructor is called ....";
        name = nameVal;
        color = colorVal;
    }
    void start()
    {
        cout << "car has started";
    }

    void stop()
    {
        cout << "car has stopped";
    }
    string getName()
    {
        return name;
    }
};

int main(){
    car c0;
    cout << endl;
    car c1("BMW","SkyBlue");
    cout << endl;
    car c2("corola", "white");
    cout << endl;
   

    return 0;
}