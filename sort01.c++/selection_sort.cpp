#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
   for(int i = 0; i <= n - 2; i++) {
       int mini = i;
       for(int j = i + 1; j <= n - 1; j++) {
           if(arr[j] < arr[mini]) {
               mini = j;
           }
       }
       swap(arr[i], arr[mini]);
   }
}

int main() {
    int n = 8;
    int arr[] = {23, 5, 1, 5, 6, 45, 9, 0};

    selection_sort(arr, n);

    // Display sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
