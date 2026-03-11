#include <iostream>
using namespace std;

int GCD(int num1,int num2){
   int n1=0,n2=0;
   int arr1[100];
   int arr2[100];
   int gcd=0;
 for(int i=1;i<=num1;i++){
   if(num1 % i == 0){
      arr1[n1] = i;
      n1++;
   }
 }
 cout<<"Array 01 :";
 for(int i=0;i<n1;i++){
   cout<<arr1[i]<<" ";
 }
 cout<<endl;
//====check factore for num2
 for(int i=1;i<=num2;i++){
   if(num2 % i == 0){
      arr2[n2] = i;
      n2++;
   }
 }
cout<<"Array 02 : ";
  for(int i=0;i<n2;i++){
   cout<<arr2[i]<<" ";
  }
cout<<endl;

for(int i=0;i<n1;i++){

     for(int j=0;j<n2;j++){
      if(arr1[i]==arr2[j] && arr1[i]>gcd){
         gcd=arr1[i];
      }
   }
  }
  
  return gcd;
 }
int main(){
    int num1,num2;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    
  int gcd = GCD(num1,num2);
  cout<<"Greatest Common Diviser = "<<gcd;
}







