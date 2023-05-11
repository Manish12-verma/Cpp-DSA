#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[],int n,int k)
{
    //sort the given array
    sort(arr,arr+n);

    //return the kth element in the sorted array
    return arr[k-1];
}
int main()
{
int arr[]={12,3,5,7,29};
int n = sizeof(arr)/sizeof(arr[0]);
int k=3;

//function call
cout <<"kth largest element is "
     <<kthSmallest(arr,n,k);
return 0;
}