#include<iostream>
using namespace std;
int main(){
  int arr[]={22,88,9,77,100,54};
  int n = sizeof(arr)/sizeof(arr[0]);
  int mx=INT16_MIN;
  for(int i=1;i<=n-1;i++){
    mx=max(mx,arr[i]);
  }
  int smax=INT16_MIN;
  for(int i=0;i<=n-1;i++){
    if(arr[i]!=mx) smax=max(smax,arr[i]);
  }
cout << smax<<endl;
cout << INT16_MAX<<endl;
cout << INT16_MIN;
}