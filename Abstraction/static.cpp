#include <iostream>
using namespace std;

// Static Keyword With Function....

void Counter(){
    static int count = 0;
    count++;
    cout << "count = "<< count << endl;

}

// Static Keyword With Class....

class Example{
    public:

    static int x;

};
int Example ::x = 0;

// Static Keyword With Object....

class Example2{
    public:
    Example2(){
        cout << "Constructor Called "<< endl;

    }
    ~Example2(){
        cout << "Destructor Called " << endl;
    }

};
int main(){
   int a = 0;
   if(a == 0){
      static Example2 e1;
   }

    cout << "Code Ending" << endl;

    return 0;
}