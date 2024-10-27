#include<iostream>
using namespace std;
int main(){
  int arr[]={55,14,79,26,44};
  int n=sizeof(arr)/sizeof(arr[0]);
  int pro=1;
  for(int i=0;i<=n-1;i++){
    pro*=arr[i];
  }
  cout<<pro;
}
