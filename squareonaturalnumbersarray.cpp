#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "enter n : ";
  cin >> n;
  int arr[n];
  for(int i=0;i<=n-1;i++){
    arr[i]=(i+1)*(i+1);
    
  }
  for(int i=0;i<=n-1;i++){
    cout << arr[i]<<" ";
  }
  
}