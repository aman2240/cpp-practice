#include<iostream>
using namespace std;
int fact(int a){
  int f=1;
  for(int i=1;i<=a;i++){
    f*=i;
    
  }
  return f;
 

}
  int main(){
    int n,r;
    cout << "enter n and r :";
    cin >> n;
    cin >> r;
    float nCr= fact(n)/(fact(r)*fact(n-r));
    cout << nCr;
  }
  
