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

    // === Negative element in every window
    
    cout<<"\nFirst negative numbers in every windows are : ";
    for(int i=0;i<=size - k ;i++){
        
        for(int j=i;j< i + k;j++){
           if(arr[j] < 0) {
            
             cout<<arr[j]<<" ";
            break;
           }
        }
       
    }

    return 0;
}