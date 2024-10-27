#include<iostream>
using namespace std;
int main(){
  int a[4][2]={22,5,555,4,22,3,11,6};
  int pro=1;
  for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
      pro*=a[i][j];
    }
  }
  cout<< pro;
}