#include <iostream>
using namespace std;

// Practice Question   
class BankAccount{
private:
    int accountNumber;
    int balance;

public:
void deposit(int n){
    balance += n;
    cout << "your Deposit Balance is = " << n << endl;
   cout << "Updated Amount is = " << balance << endl;
}
void withDraw(int n){
    balance -= n;
   cout << "You Withdrawal Amount = "<< n << endl; 
   cout << "Updated Amount is = " << balance << endl;
}
int setbalance(int currBalance){
        balance = currBalance;
        return balance;
}
int getBalance(){
    return balance;
}
void checkBalance(){
    cout << "your current Balance is = " << balance << endl;
}
};

int main(){
BankAccount b1;
b1.setbalance(100);
b1.deposit(50);
b1.withDraw(50);
b1.checkBalance();
    return 0;
}