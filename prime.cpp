#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "enter no. : ";
  cin >> n;
  bool flag = true;
  
  
  // for(int i=2;i<=n/2;i++){
  //   if(n%i==0){
  //     cout << "given no. is composite"<<endl;
  //     break;
  //   }
  //   else{
  //     cout << "given no. is prime";
  //     break;
  //   }
  for(int i=2;i<=n/2;i++){
    if(n%i==0){
      flag=false;
      break;
    }
  }
  if(flag) cout << "prime";
  else cout << "composite" ;
    
  


  return 0;
}