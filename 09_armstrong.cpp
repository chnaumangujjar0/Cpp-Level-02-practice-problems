#include<iostream>
using namespace std;



int main(){
   int num;
   int digit=0;
   int result=0;
   cout<<"Enter Number : ";
   cin>>num;

   int mainnum=num;

   while(num != 0){
    digit=num%10;
    cout<<"digit = "<<digit<<endl;
    
    digit=digit * digit * digit;
   
   cout<<digit<<"After loop digit"<<endl;
   result += digit;

   num=num/10;
   }
   cout<<"Result : "<<result<<endl;
   if(mainnum == result){
    cout<<mainnum<<" is an Arm strong Number"<<endl;
   }
   else{
    cout<<mainnum<<" is not an Arm strong number.";
   }
   
}