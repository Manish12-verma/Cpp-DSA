#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {

   for(int i = 0; i<=n-1; i++) {
         int j=i;
       while(j>0 && arr[j-1] > arr[j]) {
             swap(arr[j],arr[j-1]);
             j--;
       }
    
   }
}

int main() {
    int n = 8;
    int arr[] = {23, 5, 1, 5, 6, 45, 9, 0};

    insertion_sort(arr, n);

    // Display sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
