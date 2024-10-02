#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {

   for(int i = n-1; i >=1; i--) {
       
       for(int j = 0; j <= i - 1; j++) {
           if(arr[j] > arr[j+1]) {
               swap(arr[j],arr[j+1]);
           }
       }
    
   }
}

int main() {
    int n = 8;
    int arr[] = {23, 5, 1, 5, 6, 45, 9, 0};

    bubble_sort(arr, n);

    // Display sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
