#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "enter no. of elements of array : ";
  cin >> n;
  int arr[n];
  cout << "enter array elements ";
  int sum=0;
  for(int i=0;i<=n-1;i++){
    cin >> arr[i];
    sum+=arr[i];
  }
  cout<<sum;
}