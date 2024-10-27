#include<iostream>
using namespace std;
int main(){
  int a[5]={1,2,3,4,1};
  int b[5];
  int n=sizeof(a)/sizeof(a[0]);
  for(int i=0;i<=n-1;i++){
    b[i]=a[i];
  }
  int i=0,j=n-1;
  while(i<j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
  }
  bool flag=true;
  
  for(int i=0;i<=n-1;i++){
  if(a[i]!=b[i]) flag=false;
  }
  if(flag) cout <<"palindrome";
  else cout << "not a palindrome";
    
  }
