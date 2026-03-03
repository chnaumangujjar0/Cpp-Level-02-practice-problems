#include<iostream>
using namespace std;
int main(){
  cout<<"\n ==========REVERSE ARRAY========="<<endl;
    int size;
   
    cout<<"\n Enter Array length : ";
    cin>>size;
    int arr[size];
    //====For Input Array===
    for(int i=0;i<size;i++){
        cout<<"Enter value for "<<i<<" index : ";
        cin>>arr[i];
    }
    cout<<"\n Array Before Reverse"<<endl;
      for(int i=0;i<size;i++){
        cout<<"\n value at "<<i<<" index is "<<arr[i]<<endl;

    }
   
   
    for(int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    cout<<"\n After reverse"<<endl;
    for(int i=0;i<size;i++){
        cout<<"\n value at "<<i<<" index is "<<arr[i]<<endl;
       
    }
}