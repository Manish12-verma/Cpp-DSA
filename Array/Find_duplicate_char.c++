#include<bits/stdc++.h>
void printDups(string str){
    map<char,int> count ;
    for(int i=0; i<str.length();i++){
        count[str[i]]++; //increase the count of characters by 1 
    }
    for(auto it:count ){// iterating through the unordered map
        if(it.second >1) //if the count of characters is greater than 1 then duplicate is found
        cout << it.first <<",count = " <<it.second
             << "\n";

    }
}
//driver code 
int main(){
    string str= "test string";
    printDups(str);
    return 0;
}