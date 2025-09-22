#include <iostream>
using namespace std;
class MyClass {
  public:
    void myDestination() {
      cout << "I am going to Ktm.\n " ;
    }
};


class Visit  {
  public:
    void myOtherFunction() {
      cout << "I am gone visit my home.\n" ;
    }
};


class MyChildClass: public MyClass, public Visit {
};

int main() {
  MyChildClass myObj;
  myObj.myDestination();
  myObj.myOtherFunction();
  return 0;
} 

