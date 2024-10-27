#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "enter n : ";
  cin >> n;
  int i=2;
  bool flag=true;
  while (i<n)
  {
    if(n%i==0){ 
      flag=false;
    }
    i++;
  }
  if(flag) 
    cout << "prime";
  else
    cout << "not prime";
  
}