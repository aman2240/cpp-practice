#include<iostream>
using namespace std;
int main(){
  int a[4][2]={22,5,555,4,22,3,11,6},b[4][2]={99,1,2,3,45,6,8,9};
  int c[4][2];
  for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
      c[i][j]=a[i][j]+b[i][j];
    }
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
      cout << c[i][j]<<" ";

    }
    cout << endl;
  
  }
}