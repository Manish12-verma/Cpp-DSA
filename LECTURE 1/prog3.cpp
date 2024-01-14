#include<bits/stdc++.h>
using namespace std;


int main(){
    int x=10;
    int y= (x++,x++,x++);
    cout << x<< " "<<y;
    return 0;
}