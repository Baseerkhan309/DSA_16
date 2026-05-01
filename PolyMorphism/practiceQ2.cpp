#include <iostream>
#include <string>
using namespace std;

// Practice Question
class Person{
public:
   string name;
   int age;

   Person(){
    cout << "default constructor \n";
   }
   Person(string name,int age){
            this->name = name;
             this->age = age;
           cout << "Parent Constructor Called \n";
   }
};

class Child : public Person{
public:
  int studentID;

       Child(string name, int age, int student) : Person(name,age){
        this->name = name;
         this->age = age;
         this->studentID = student;
         cout << "child Construcotr Called \n";
       }

  void dispalyStudentInfo(){
         cout << "your name = "<< name << endl << " your age = " << age << endl << " your student id  = " << studentID << endl;
  }

};
int main(){
Child ch1("baseer khan",18,1234);
ch1.dispalyStudentInfo();

    return 0;
}