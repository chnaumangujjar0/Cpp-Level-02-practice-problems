#include <iostream>
using namespace std;

 int sum(int n){
    if(n<1) return 0;
   return (n % 10) + sum(n/10);
 }
 
int main() {
    int n ;
    cout<<"\n Enter Number : ";
    cin>>n;
    cout<<" Sum = "<<sum(n);
 
    return 0;
}