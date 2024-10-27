#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "enter no. : ";
  cin >> n;
  
  
  for(int i=n/2;i>=1;i--){
    if(n%i==0){
      cout << "highest factor of the no. is  "<< i <<endl;
      break;
  }
    
    
    
  }


  return 0;
}