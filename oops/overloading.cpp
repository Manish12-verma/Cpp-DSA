#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
    string name;

    Student(){
        cout<<"Non parameterized"<<endl;
    }

    Student(string name){
       this->name = name;
       cout <<"Parameterized"<<endl;
    }
};

int main(){
    
    Student s1("Manish");

    return 0;
}