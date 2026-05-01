#include <iostream>
using namespace std;

// Abstract Class 
class Shape{
public:
   virtual void draw() = 0;

};

class Circle : public Shape{
public:
void draw(){
    cout << "circle Draw \n"; 
}
};

class Square : public Shape{
public:
void draw(){
    cout << "square draw \n";

}
};

int main(){
Circle cr1;
cr1.draw();

Square sq1;
sq1.draw();



    return 0;
}