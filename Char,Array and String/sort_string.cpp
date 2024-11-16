#include<bits/stdc++.h>
using namespace std;
string sortS(string s,int n){
        vector<int>arr(26,0);

        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }

        string ans =" ";
        
        for(int i=0;i<n;i++){
            char ch = 'a'+i;

            while(arr[i]){
                ans+=ch;
                arr[i]--;
            }
        }
        return ans;
}
int main(){
    string s = "edcab";
    int n = s.length();

    cout << "Sorted string:---"<<sortS(s,n);

    return 0;
}