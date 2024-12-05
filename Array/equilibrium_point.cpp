#include<bits/stdc++.h>
using namespace std;
int equilibrium(int arr[],int n){
    int leftSum =0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int rightSum = sum;

    for(int i=0;i<n;i++){
       rightSum -= arr[i];
          if(leftSum == rightSum){
            return i+1;  //using 1 based indexing
          }
       leftSum += arr[i];
    }
    return -1;
}

int main(){
    int arr[]={1,3,5,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout <<"The equilibrium point is :- "<<equilibrium(arr,n);

    return 0;
}