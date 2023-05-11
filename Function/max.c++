#include<iostream>
using namespace std;

//following function that takes two parametr 'x' and 'y'
//as input and returns max of two input numbers
int max(int x,int y){
    if(x>y)
       return x;
    else
       return y;   
}
//main function that doesn't receive any parameter and
//return integer
int main(){
    int a=10,b=20;
    //calling function that doesn't receive any parameter and returns integer
    int m=max(a,b);
    cout <<"m is "<<m;
    return 0;
}