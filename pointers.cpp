#include<iostream>
using namespace std;
int main(){
  int x=45;
  int* ptr=&x;
  cout << &x <<endl;
  cout << ptr <<endl;
  cout << *ptr <<endl; //dereferenc operaor --> *
  cout << &ptr <<endl;
  *ptr= 67;
  cout << x <<endl;
}
