#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getInversion(int arr[],int n)
{
    int inv =0;
    for(int i=0;i <n-1;i++)
       for(int j=i+1;j<n;j++)
          if(arr[i]>arr[j])
            inv++;

     return inv;  
}
int main(){
    int arr[]={1,20,6,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << getInversion(arr,n);
    return 0;

        
}
// here time complexity is O(n*2);
//space complexity is O(1);
