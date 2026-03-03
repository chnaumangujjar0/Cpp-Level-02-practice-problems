#include<iostream>
using namespace std;
int main(){
    int arr[6]={10,12,34,5,67,3};
    int largest=0;
    int secondlargest=arr[0];
    for(int i=1;i<6;i++){
     if(largest < arr[i] ){
        largest=arr[i];
     }
    
    }
   for(int i=0;i<6;i++){
    if(arr[i]<largest && arr[i]>secondlargest){
        secondlargest=arr[i];
    }
   }
    cout<<"The Second Largest Number in array is "<<secondlargest;

}