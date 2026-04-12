#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 3, 4, 3, 1};
    int n =sizeof(arr)/sizeof(arr[0]);

    int freq[100] = {0}; // assuming values are <= 99

    // Count frequency
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxCount = 0;
    int result = arr[0];

    // Find most frequent element
    for (int i = 0; i < 100; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            result = i;
        }
    }

    cout << "Most frequent element: " << result;

    return 0;
}