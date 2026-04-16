#include <iostream>
using namespace std;
   int sum(int arr[6],int n){

      if (n<=0) return 0;
      cout<<n<<" ";
      return arr[n-1] + sum(arr,n-1);
      
   }
int main() {
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    cout<<"\n sum : "<< sum(arr,n)<<endl;
    return 0;  
}