#include <iostream>
#include <string>
using namespace std;

// getter / Setter :

class student{
private:
 string name;
 float cgpa;

public:
 string fatherName;
 int age;

// Setter 
void changeName(string nameVal){
    name = nameVal; 
}
void changeCgpa(float cgpaVal){
    cgpa =  cgpaVal;
}

// Getter
string showName(){
    return name;
}
float showCgpa(){
    return cgpa;
}
};

int main(){
 student st1;

 st1.fatherName = "Maqsood Shah";
 st1.age = 18;
 st1.changeName("Baseer Khan");
 st1.changeCgpa(3.5);

 cout << st1.showName() << endl;
 cout << st1.fatherName << endl;
 cout << st1.age << endl;
 cout << st1.showCgpa() << endl;



    return 0;
}