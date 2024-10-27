#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "enter no. : ";
  cin >> n;
  
  
  for(int i=2;i<=n/2;i++){
    if(n%i==0){
      cout << "given no. is composite"<<endl;
      break;
    }
    else{
      cout << "given no. is not composite";
      break;
    }
    
    
    
  }


  return 0;
}