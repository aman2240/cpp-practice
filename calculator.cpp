#include<iostream>
using namespace std;
int main(){
  int a,b;
  char ch;
  cout << "enter numbers : ";
  cin >> a;
  cin >> b;
  cout << "enter operator(+,-,*,/) : ";
  cin >> ch;
  switch (ch)
  {
  case '+':
    cout << a+b;
    break;
  case '-':
    cout << a-b;
    break;
  case '*':
    cout << a*b;
    break;
  case '/':
    cout << a/b;
    break;

  default:
    cout << "invalid operator";
    break;
  }
    
  

  return 0;
}