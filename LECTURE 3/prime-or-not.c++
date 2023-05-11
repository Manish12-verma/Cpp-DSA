#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;

    int i=2;
    while(i<n){
        // divided,then it is not a prime number
        if(n%i==0)
{
    cout<<"Not prime"<<i<<endl;
}
else{
    cout<<"Prime"<<i<<endl;
}
   i++;
    }
}