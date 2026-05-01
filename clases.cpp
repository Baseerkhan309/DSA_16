#include <iostream>
using namespace std;

// Classes Start

class student{

// Properties

  public:
    string name;
    string fatherName;
    float cgpa;

    // Methods
    void getPercentage()
    {
        cout << (cgpa * 10) << "% \n";
    }
};

int main()
{
    student s1;
    s1.name = "Baseer Khan";
    s1.fatherName = "Maqsood Shah";
    s1.cgpa = 3.5;
   
    cout << s1.name << endl;
    cout << s1.fatherName << endl;
    cout << s1.cgpa << endl;
    s1.getPercentage();


    return 0;
}