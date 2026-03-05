#include<iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    cout<<"\n ========MERGE ARRAY======"<<endl;
    //====take first array========
     cout<<"Enter size of first array : ";
     cin>>n1;
     int arr1[n1]; //=====intialize array1
     cout<<"Enter elements : ";
     for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    //======print arrray 1
    cout<<" [ ";
    for(int i=0;i<n1;i++){
        cout<<arr1[i];
        if(i<n1-1){
            cout<<" , ";
        }
    }
    cout<<" ] ";
    //=====take second array======
    cout<<"\n Enter size of second array : ";
    cin>>n2;
    cout<<"Enter elemnts : ";
    int arr2[n2]; //====intialize array2===========
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    //===print arr2
    cout<<" [ ";
    for(int i=0;i<n2;i++){
        cout<<arr2[i];
        if(i<n2-1){
            cout<<" , ";
        }
    }
    cout<<" ] ";
   int mergedarray[n1+n2];
   //==merge array1
   for(int i=0;i<n1;i++){
    mergedarray[i]=arr1[i];
   }
   //====merge array 2
   for(int i=0;i<n2;i++){
    mergedarray[n1+i]=arr2[i];
   }
  ///print merged array
    cout<<" [ ";
    for(int i=0;i<n1+n2;i++){
        cout<<mergedarray[i];
        if(i<n1+n2-1){
            cout<<" , ";
        }
    }
    cout<<" ] ";
}