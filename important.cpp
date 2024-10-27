#include<iostream>
using namespace std;
int main(){
  int cp,sp;
  cout << "enter cost price : ";
  cin >> cp;
  cout << "enter selling price : ";
  cin >> sp;
  if(sp>cp){
    cout << "seller has made profit"<<endl;
    cout << "profit ="<<sp-cp;

  }
  else if(cp>sp){
    cout << "seller has made loss"<<endl;
    cout << "loss = "<<cp-sp;
  }
  else
  cout << "seller has made no profit no loss";

  return 0;
}