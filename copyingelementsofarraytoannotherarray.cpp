#include<iostream>
using namespace std;
int main(){
  int a[6]={6,5,4,3,2,1};
  int b[6];
  int n=sizeof(a)/sizeof(a[0]);
  for(int i=n-1;i>=0;i--){
    b[n-i-1]=a[i];
    cout << b[n-i-1]<<" ";
  }
}