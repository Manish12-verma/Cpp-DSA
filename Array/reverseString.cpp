#include<iostream>
#include<bits/stdc++.h>
using namespace std;
reverseStr(string& str){
    for(int i=str.length();i>=0;i--){
        cout<<str[i];
    }
}
int main(){
    string str="GeeksforGeek";
    reverseStr(str);
    //cout <<str;
    return 0;
}
