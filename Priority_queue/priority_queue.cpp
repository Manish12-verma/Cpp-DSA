#include<bits/stdc++.h>
using namespace std;
void mySort(int arr[],int n){
    priority_queue<int> pq(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        arr[i] = pq.top();
        cout<< arr[i]<<" ";
        pq.pop();
    }
}

int main(){
int arr[] ={12,5,8};
mySort(arr,3);
return 0;
}