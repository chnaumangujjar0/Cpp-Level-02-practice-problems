#include <iostream>
using namespace std;

int main() {

    int arr[] = {5, -3, 4, -7, 8, -2, -1, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k =3 ;
    // Edge Case
    if (k > size) {
        cout << "Invalid window size!";
        return 0;
    }
     // =============== Largest number in every window ============
    int maxElement ;
    cout<<"\nLargest numbers in every windows are : ";
    for(int i=0;i<=size - k ;i++){
        maxElement = arr[i];
        for(int j=i;j< i + k;j++){
           if(arr[j] > maxElement) maxElement = arr[j] ;
        }
        cout<<maxElement<<" ";
    }

    return 0;
}