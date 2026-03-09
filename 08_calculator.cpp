#include<iostream>
using namespace std;
  

    int calculate(int n1){
    int n2;
    char oper;

    cout<<"\n Number 1 = "<<n1<<endl;
    cout<<"\n Enter next value (enter -1 to exit):"<<endl;
   
    cin>>n2;
   if(n2 == -1) return -1;

    cout<<"\n Enter Operation(+,-,*,/) : ";
    cin>>oper;
    if(oper =='+'){
        return n1 + n2;
    }else if(oper == '-'){
        return n1 - n2;
    }else if(oper == '*'){
        return n1*n2;
    }else if (oper == '/')
    {
    if(n2 == 0){
        cout<<"invalid dividend"<<endl;
       return -1;
    }
        return n1 / n2;
     }else{
        cout<<"invalid operator"<<endl;
        return n1;
     };
    }
int main(){
    int n1;
    double result;
   
    cout<<"\n ==============CALCULATOR============="<<endl;
     cout<<"\n Enter Number 01 : ";
     cin>>n1;
   
    result = calculate(n1); //for first time calling functio

    while (result != -1)
    {
     cout<<"\n result : "<<result<<endl;
     n1=result;  //we make the previuos result as a value 1 
     result = calculate(n1);
    }
    if(result == -1){
        cout<<"\n Calculator Exited.";
    } 
}