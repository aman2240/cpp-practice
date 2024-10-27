#include<iostream>
using namespace std;
int main(){
  int arr[]={22,88,9,77,100,54};
  int n = sizeof(arr)/sizeof(arr[0]);
  int mx=arr[0];
  for(int i=1;i<=n-1;i++){
    if(mx>arr[i]){
      mx=arr[i];
    }
    // mx=min(mx,arr[i]);
  }
  cout<<"min element of array is "<<mx;
}





// INT_MIN smallest no. int datatype can store
