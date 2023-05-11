#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j)
             swap(arr[i],arr[j]);
        j++;     
        }
    }
    
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,-7,-8,4,9,3,-13};
    int n= sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,n);
    printArray(arr,n);
    return 0;

}