#include<iostream>
#include<bits/std.c++>
using namespace std;

int mer

int main(){
    int arr[]={1,20,6,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans =mergeSort(arr,n);
    cout <<"Numbers of inversions are:" << ans;
    return 0;
}