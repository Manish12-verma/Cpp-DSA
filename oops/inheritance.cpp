#include<bits/stdc++.h>
using namespace std;

class Person{
  public:
    string name;
    int age;

    Person(){
     cout <<"I am base class"<<endl;
}
};

class Student:public Person{
  public:
    int rollno;


    Student(){
         cout << "I,am derived class"<<endl;
    }
    void getInfo(){
        cout << "name: "<<name <<endl;
        cout << "age: "<<age <<endl;
        cout << "rollno: "<<rollno <<endl;
    }
};

int main(){
    
    Student s1;
    s1.name = "rahul kumar";
    s1.age = 21;
    s1.rollno = 24;

    s1.getInfo();
      


    return 0;
}