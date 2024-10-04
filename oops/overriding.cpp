#include<bits/stdc++.h>
using namespace std;

class Student{
  public:

    void getInfo(){
        cout<<"Original function"<<endl;
    }
};

class Person:public Student{
     public:
       void getInfo(){
        cout <<"function is overridden"<<endl;  //overridden here
       }
};

int main(){
    
    Person p1;
    p1.getInfo();
    
    return 0;
}