#include<bits/stdc++.h>
using namespace std;
void findOccurence(string text,string pattern){
    int pos = text.find(pattern);
    while(pos != string::npos){
        cout <<pos<<endl;
        pos = text.find(pattern,pos+1);
    }
}
int main(){
    string text ="manish verma and manish verma is a good student";
    string pattern = "manish";
    findOccurence(text,pattern);
}