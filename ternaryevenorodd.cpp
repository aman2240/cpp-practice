#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "enter the number ";
  cin >> n;
  //(condition) ? if true : if false ; --> syntax for ternary opertor
  (n%2==0) ? cout << "even" : cout << "odd";

  return 0;
}