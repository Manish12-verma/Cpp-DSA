#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[]={5,6,0,4,6,0,9,0,8};
int n=sizeof(a)/sizeof(a[0]);
int j=0;
for(int i =0;i<n;i++){
    if(a[i]!=0){
        swap(a[j],a[i]); //partioning the array
        j++;
    }
}
for(int i= 0;i<n;i++){
    cout<< a[i]<<" "; //print the array
}
return 0;
}