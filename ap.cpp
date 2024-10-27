#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "enter no. of terms of ap - ";
  cin >> n;
  int a = 4;
  
  for(int i=1;i<=n;i++){
    cout << a<<endl;
    a=a+7;
    
    
  }


  return 0;
}