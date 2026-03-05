#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    int arr[n];
    int newarr[n];
    int n2=n;

    // input
    for(int i=0;i<n;i++){
        cout<<"Enter value for index "<<i<<" : ";
        cin>>arr[i];
    }

    for(int k=0;k<n2;k++){

        int smallest = arr[0];
        int index = 0;

        // find smallest
        for(int i=0;i<n;i++){
            if(arr[i] < smallest){
                smallest = arr[i];
                index = i;
            }
        }

        newarr[k] = smallest;

        // shifting
        for(int i=index;i<n-1;i++){
            arr[i] = arr[i+1];
        }

        n--;
    }

    cout<<"Sorted array : [ ";
    for(int i=0;i<n2;i++){
        cout<<newarr[i];
        if(i<n2-1){
            cout<<" , ";
        }
    }
    cout<<" ]";
}