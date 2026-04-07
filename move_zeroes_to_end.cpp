#include <iostream>
using namespace std;

int main() {

    int arr[]={0,2,0,10,12,0,67,0,2,};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size;

    for (int i = 0; i < size; i++)
        if(arr[i] != 0){
                for(int j = i; j > 0;j--){
                int temp ;
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            }
           
   
    return 0;
}