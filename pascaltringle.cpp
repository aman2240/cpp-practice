#include<iostream>
using namespace std;

int fact(int a){
  int f=1;
  for(int i=1;i<=a;i++){
    f*=i;
    
  }
  return f;
 

}
int nCr(int a,int b){
  int ncr=fact(a)/(fact(b)*fact(a-b));
  return ncr;
}
int pt(int x){
  for(int i=0;i<=x;i++){
    for(int j=0;j<=i;j++){
     cout << nCr(i,j)<<" ";
    }
    cout << endl;
  }
}
int main(){
  int n;
  cout << "enter n : ";
  cin >> n;
  pt(n);

}