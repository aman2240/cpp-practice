#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "enter n:";
  cin >> n;
  int count=0;
  
  while(n>0){
    if(n%10!=0){
      count++;
      n=n/10;
    }

    
  }
  cout << count;
}