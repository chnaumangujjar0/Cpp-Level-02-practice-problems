#include<iostream>
using namespace std;
int main(){
    // Step 1: Find largest element
    // Step 2: Mark as used
    // Step 3: Store in new array
   
    int arr[]={10,12,8,7,3,15,14};
    int n=7,n2=7;
    int largest=arr[0];
    int newarr[7];
    int smallest=0;
    while(n2!=0){
    // find largest===========
    for(int i=0;i<n;i++){
      if(largest < arr[i]){
        largest=arr[i];
      }
    }
    // mark as read the largest vale
    for(int i=0;i<n;i++){
        if(arr[i]==largest){
           arr[i]=-9999; 
        }
    }
    //=====store in new array
    newarr[n-n2]=largest;
    n2--;
    largest=arr[0];
    };

    
    //print new array=========
    for(int i=0;i<n;i++){
        cout<<"Value at index "<<i<<" is "<<newarr[i]<<endl;
    }

}