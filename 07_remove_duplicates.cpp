#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
   
     // input
    for(int i=0;i<n;i++){
        cout<<"Enter value for index "<<i<<" : ";
        cin>>arr[i];
    }

    //===check point
    for(int i=0;i<n;i++){ //first loop for ckeck for comparison with second loop members 
      for(int j=i+1;j<n;j++){

        if(arr[i]==arr[j]){

            for(int k=j;k<n-1;k++){
                arr[k]=arr[k+1];
            }
            n--; //decrease the array size 
            j--; // after decreasing at j index will a differnet value so we have to check it again,it is a very important step with out this we cannot remove duplicates
        }
      }
       
    }
 
    for(int i=0;i<n;i++){ // At the End print array with decreased array size and without duplicates
        cout<<arr[i]<<" ";
    }
}