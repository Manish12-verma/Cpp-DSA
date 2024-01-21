#include<bits/stdc++.h>
using namespace std;

string generate(int n,bool zero){
	string ans = "";
	if(n==0)  return ans;
        if (zero) {
          ans += '0';
          n--;
        } else {
          ans += '1';
          n--;
        }
        while(n!=0) {
		char temp = (ans[ans.size()-1]=='0')?'1':'0';
		ans+=temp;
		n--;
	} 
}
int change(string str,string s,int n){
	int ans=0;
	for(int i=0;i<n;i++){
		if(str[i]!=s[i])
		  ans++;
	}
	return ans;
}
int makeBeautiful(string str) {
	// Write your code here
	int n=str.size();
	string g1=generate(n,true);
	int diff1 = change(str,g1,n);

    string g2=generate(n,false);
	int diff2=change(str,g2,n);

	return min(diff1,diff2);


}
