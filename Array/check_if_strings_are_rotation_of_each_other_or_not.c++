#include<bits/stdc++.h>
using namespace std;
void areRotation(string str1,string str2){
int l1 = str1.length();
int l2 = str2.length();

if(l1!=l2){
cout <<"No";
}
else{
    string temp =str1 +str2;
    if(temp.find(str2) != string::npos){
        //here npos=no-positon ,which is use to represent that no matches is found in the string 
        cout <<"yes";
    }
    else{
        cout << "No";
    }
}

}
int main(){
     string str1 = "AACD" , str2="ACDA";

     //functions call
     areRotation(str1,str2);
}