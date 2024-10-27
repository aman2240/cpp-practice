#include<iostream>
using namespace std;
int main(){
  int a[4][2]={22,5,555,4,22,3,11,6};
  int mn=INT16_MAX;
  for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
      if(a[i][j]<mn) mn=a[i][j];
    }
  }
  cout<< mn;
}