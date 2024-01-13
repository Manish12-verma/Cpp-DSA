#include<iostream>
using namespace std;

int main(){
    try {
        int age=12;
        if(age>=18){
            cout<<"You are elliglible to vote.";
        }
        else{
            throw(age);
        }
    }
    catch(int age){
        cout<<"Sorry,you are not eligible to vote" <<endl;
        cout<<"Your age is : "<<age;
    }
    return 0;
}