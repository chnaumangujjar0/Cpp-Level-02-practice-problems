#include<iostream>
using namespace std;
int main(){
    int arr[]={10,12,14,9,17,13};
    int largest=0;
    int smallest=arr[0];
    //====Largest number in Array
    for(int i=1;i<6;i++){
     if(largest < arr[i] ){
        largest=arr[i];
     }
    
    }
    cout<<"The Largest number In Array is "<<largest<<endl;

    //======For Smallest Number in Array
     for(int i=1;i<6;i++){
     if(smallest > arr[i] ){
        smallest=arr[i];
     }
    }
    cout<<"Smallest Number in Array is "<<smallest<<endl;;
}