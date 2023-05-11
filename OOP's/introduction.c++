#include<iostream>
#include<string>
using namespace std;

class MyClass {
    public:
    int myNum;
    string myString;

};
int main(){
    MyClass myObj; //create an object of my class

    myObj.myNum = 15;
    myObj.myString = "Some text";

    //print values
    cout<< myObj.myNum <<endl;
    cout<< myObj.myString <<endl;

    return 0;
}