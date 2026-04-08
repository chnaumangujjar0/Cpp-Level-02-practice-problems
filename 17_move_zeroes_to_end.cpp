#include <iostream>
using namespace std;

int main() {

    int arr[]={0,2,0,10,12,0,67,0,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = 0;
    cout<<" \nBefore Update : [";     
    for(int i=0 ;i<size;i++){
        cout<< arr[i];
        if(i<size - 1){
            cout<<",";
        }
    }
    cout<<" ]";
    // --------- Method 01 ---------------
    // for (int i = 0; i < size; i++)
    //     if(arr[i] != 0){
    //            for(int j=i;j > 0;j--) {
    //             if(arr[j-1] == 0 ){
    //             int temp ;
    //             temp = arr[j];
    //             arr[j] = arr[j-1];
    //             arr[j-1] = temp;
    //             }
    //            }
    //     }
    //-------- METHOD 2 ------------  
    for(int i=0;i<size;i++){

        if(arr[i] !=0){
            arr[index]=arr[i];
            index++;
        }
    }
    for(int i=index;i<size;i++){
        arr[i]= 0;
    }
    // ------------------------
    cout<<" \nAfter Update : [";     
    for(int i=0 ;i<size;i++){
        cout<< arr[i];
        if(i<size - 1){
            cout<<",";
        }
    }
    cout<<" ]";
    return 0;
}