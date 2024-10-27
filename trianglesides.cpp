#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout << "enter the sides of the triangle : ";
  cin >> a;
  cin >> b;
  cin >> c;
  if(a+b>c and b+c>a and c+a>b ){
    cout << "triangle possible";

  }
  else{
    cout << "triangle not pssible";
  }

  return 0;
}