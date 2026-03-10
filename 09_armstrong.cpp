#include<iostream>
using namespace std;

 bool checkArmstrong(int num){
  
   int digit=0;
   int result=0;
  

   int mainnum=num;

   while(num != 0){
    digit=num%10; //extract last digit 

    result += digit * digit * digit; //find its armstrong

    num=num/10;      //reduce the last digit
   }
    if(mainnum == result){
   return true;
   }
   else{
    return false;
   }
 }

int main(){
   int num;
   cout<<"Enter Number : ";
   cin>>num;
   bool result = checkArmstrong(num);

   if(result){
    cout<<"it is an Arm strong Number"<<endl;
   }
   else{
    cout<<"it is not an Arm strong number.";
   }
   
}