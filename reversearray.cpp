#include<iostream>
using namespace std;
int main(){
  int a[]={1,2,3,4,5};
  int n=sizeof(a)/sizeof(a[0]);
  int i=0,j=n-1;
  while(i<j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
  }
  for(int i=0;i<=n-1;i++)
      cout<< a[i]<<" ";
  }
