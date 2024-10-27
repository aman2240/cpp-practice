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
    float nPr= fact(n)/fact(n-r);
    cout << nPr;
  }