#include<bits/stdc++.h>
using namespace std;
int KthLargest(int arr[], int n, int k) {
    priority_queue<int> pq(arr, arr+n);
    int x;
    while (k > 0)
    {
        x = pq.top(); pq.pop();
        k--;
    }
    return x;
    }
int main(){
    int arr[] = {1, 9, 7, 2, 4};
    
    int n = 5, k = 3;

   
    cout << KthLargest(arr, n, k);
    return 0;
}