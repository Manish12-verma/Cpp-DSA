#include<iostream>
using namespace std; 
class MyClass{
    public:
      void myFunction(){
        cout<< "Some content in parent class.";

      }
};
// derived child (child)
class MyChild: public MyClass{

};
//derived class(grand child)
class MyGrandChild:public MyChild{

};
int main(){
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;

}