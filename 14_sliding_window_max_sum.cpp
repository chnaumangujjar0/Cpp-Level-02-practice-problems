#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, -3, 4, -7, 8, -2, -1, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k = 3;   // Window size

    // Edge case check
    if (k > size) {
        cout << "Invalid window size!";
        return 0;
    }

    //  Calculate first window sum
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int largest = sum;

    //  Slide the window
    for (int i = k; i < size; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > largest) {
            largest = sum;
        }
    }

    cout << "\nLargest Sum = " << largest << endl;
    return 0;
}