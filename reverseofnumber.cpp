#include<iostream>
using namespace std;
int main(){
  int n,m;
  cout << "enter n:";
  cin >> n;
  m=n;
  int rev=0;
  int ld;
  while(n>0){
    ld=n%10;
    rev*=10;
    rev+=ld;
    n=n/10;
    
    
  }
  cout <<m+rev;
}