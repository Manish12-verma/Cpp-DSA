#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
   virtual void animalSound(){
      cout<<"This is a generic Function";
   }
};
//child class or sub class or derived class
class Dog : public Animal{
public:
   void animalSound(){ 
      cout<<"Woof";
   }
};


int main(){
    Dog d1;
    d1.animalSound();

    return 0;
}