#include<iostream>
using namespace std;
int firstDigit(int n){
    while(n>=10){
        n=n/10;
    }
    return n;
}
int main(){
    int n= 9324364;
    cout << "First Digit is : "<< firstDigit(n);
    return 0;
}