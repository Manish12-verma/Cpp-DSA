#include<bits/stdc++.h>
using namespace std;
 string addBinary(string &s1,string &s2){
    string ans ="";
    int carry=0;

    int i = s1.size()-1;
    int j = s2.size()-1;

    while(i>=0 || j>=0){
           
            int count1=0;
            if(i>=0 && s1[i]=='1') count1++;
            if(j>=0 && s2[j]=='1') count1++;
            
            if(count1 + carry ==0){
                ans+='0';
                carry = 0;
            }else if(count1 + carry ==1){
                ans +='1';
                carry =0;
            }else if(count1 + carry ==2){
                ans +='0';
                carry=1;
            }else if(count1 + carry ==3){
                ans+= '1';
                carry = 1;
            }
            i--;
            j--;
       }


       if(carry ==1){
           ans+=to_string(carry);
       }

       reverse(ans.begin(),ans.end());
       
       //removing leading zeroes in answer
       
       i=0;
       while(ans[i]=='0'){
           ans.erase(0,1);
       }
       return ans;

 }

int main(){
  string s1 = "1101", s2 = "111";
  string num =  addBinary(s1,s2);
   cout <<num;

   return 0;

}