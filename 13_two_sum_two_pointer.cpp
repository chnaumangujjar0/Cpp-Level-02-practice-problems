#include<iostream>
using namespace std;

int main(){
    int arr[]={2,4,6,8,10};
    int target=10;
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int left = 0;
    int right = size - 1;
    bool found = false;

    while(left < right){   

        int sum = arr[left] + arr[right];

        if(sum == target){
            cout<< "\nTarget Matched!";
            cout<< "\nNumbers: " << arr[left] << " " << arr[right];
            found = true;

            left++;     
            right--;   
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }

    if(!found) cout<<"\nNot found.";
}