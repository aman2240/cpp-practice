//Count the nuumber of elements in given array greater than a given number
#include<iostream>
using namespace std;
int main(){
  int arr[]={55,77,44,76,86,3,0};
  int m,n,count=0;
  n= sizeof(arr)/sizeof(arr[0]);
  cout << "enter number to check : ";
  cin >> m;
  for(int i=0;i<=n-1;i++){
    
    if(arr[i]>m) count++;
    
  }
  cout << count<<" numbers are greater than "<<m;
}