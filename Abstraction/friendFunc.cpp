#include <iostream>
#include <string>
using namespace std;

// Friend Class
class A{
    string secret = "secret Data";
    friend class B;
    friend void revealSecret(A &obj);
};
 
class B{
    public:
    void showSecret(A &obj){
        cout << obj.secret << endl;
    }
};

// Friend Function 

void revealSecret(A &obj){
    cout << obj.secret << endl;

}
int main(){
A a1;
B b1;

revealSecret(a1);
//b1.showSecret(a1);

    return 0;
}