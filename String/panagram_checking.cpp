#include<bits/stdc++.h>
using namespace std;

bool checkPangram(string str){
    int arr[26]={0};
    for(int i=0;i<str.length();i++){
        if('A' <=(str[i]) && str[i] <='Z')
          arr[str[i]-'A']++;
        else if('a'<=str[i] && str[i]<='z')
          arr[str[i]-'a']++;
    }
   for(int i=0;i<26;i++){
    if(arr[i]==0)
      return false;
   }
   return true;
}
int main(){
    string str="The quick brown fox jumps over the lazy dog";
    if (checkPangram(str) == true)
       cout << "String is a panagram   " << str<<endl;
    else
     cout << "String is not a panagram   " << str<<endl;
    return 0;
}