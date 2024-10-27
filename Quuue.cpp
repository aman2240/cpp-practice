#include<iostream>
using namespace std;
int main(){
  int a[5][4]={22,5,555,4,22,3,11,6,1,2,3,4,5,6,7,8,9,0,3,2};
  int sum=0;
  for(int i=1;i<=4;i++){
    for(int j=1;j<=2;j++){
      sum+=a[i][j];
    }
  }
  cout<< sum;
}