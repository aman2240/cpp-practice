#include<iostream>
using namespace std;
void swap(int x,int y){
  int t;
  t=x;
  x=y;
  y=t;
  cout << "after swapping"<<endl;
  cout << x <<"  "<<y;
}
int main(){
  int a,b;
  cout << "enter numbers : ";
  cin >> a;
  cin >> b;
  cout << "before swapping "<<endl;
  cout << a<< " "<<b<<endl; 
  swap(a,b);
}