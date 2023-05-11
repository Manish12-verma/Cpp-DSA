#include<iostream>
#include<bits/stdc++.h>
using namespace std;
equilibriumPoint(int arr[],int n){
     int sum=0;
     int leftsum=0;

     //find the sum of whole array
    for(int i=0;i <n;++i)
        sum += arr[i];
    for(int i=0; i < n; ++i){
        sum -=arr[i]; 
        // sum is now right sum for index i

        if(leftsum == sum)
          return i;

        leftsum +=arr[i]; 

    }

    //no equilibrium index found then return o
    return -1;
}

int main(){
    int arr[]={-7, 1, 5, 2, -4, 3, 0};
    int n=sizeof(arr)/sizeof(arr[0]);

    //function call
    cout << "first equilibrium index is  "
         << equilibriumPoint(arr,n);

         return 0;
}