#include <iostream>
#include <string> 
using namespace std;

// Inheritence 

class Animal{
public:
 void eat(){
    cout << "eat\n";
 }
 void Breath(){
    cout << "breath\n";
 }
};
class mamal: public Animal{
 public:
 string bloodType;

 mamal(){
    cout << " blood type = warm\n";
 }

};
class Dog: public mamal{
public:
   void tailWag(){
    cout << "A dog wags its tail\n";
   }
};


int main(){
     
 Dog d1;
 d1.eat();
 d1.Breath();
 d1.tailWag();
 d1.bloodType;


    return 0;
};