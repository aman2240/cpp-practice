#include<iostream>
using namespace std;
int main(){
  int arr[6]={14,6,88,4,9,80};
  int n= sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<=n-1;i++){
    if(i%2!=0){
      arr[i]*=2;

    }
    else arr[i]+=10;
    cout<< arr[i]<<" ";
    
  }

}