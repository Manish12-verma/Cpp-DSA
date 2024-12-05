#include <bits/stdc++.h>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, int n, vector<int>& arr2) {
    vector<int> ans;
    map<int, int> mpp;

    // Count occurrences of elements in arr1
    for (int i = 0; i < n; i++) {
        mpp[arr1[i]]++;
    }

    // Add elements of arr1 in the order of arr2
    for (int num : arr2) {
        if (mpp.find(num) != mpp.end()) {
            ans.insert(ans.end(), mpp[num], num);
            mpp.erase(num);  // Remove elements from map after adding them to result
        }
    }

    // Add remaining elements of arr1 that are not in arr2
    for (auto x : mpp) {
        ans.insert(ans.end(), x.second, x.first);
    }
    return ans;
}

int main() {
    // Initialize arrays
    int arr1[] = {1, 3, 4, 5, 2};
    int arr2[] = {2, 4, 3, 1, 7, 5, 15};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    // Convert arrays to vectors
    vector<int> vec1(arr1, arr1 + n);
    vector<int> vec2(arr2, arr2 + m);

    // Get the sorted array
    vector<int> sortedArr = relativeSortArray(vec1, n, vec2);

    // Print the result
    cout << "Sorted array is: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
