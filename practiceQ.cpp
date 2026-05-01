#include <iostream>
#include <string>
using namespace std;

class User{
private:
    int id;
    string password;

public:
   string userName;

   User(int id){
    this->id = id;
   }
   void setPassword(string password){
       this->password = password;

   }

   string getterPasword(){
    return password;
   }
};

int main(){
User user1(101);
user1.userName = "baseer khan";
user1.setPassword("abcd");

cout << "userName = " << user1.userName << endl;
cout << "user password = " << user1.getterPasword() << endl;




    return 0;
}