#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout << "enter numbers : ";
  cin >> a;
  cin >> b;
  cin >> c;
  if(a>b){
    if(a>c){
      cout << a<< " is the greatest";
    }
    else{
      cout << c<< "is the greatest";
    }
  
  }
  else{
    if(b>c){
      cout << b<< " is the greatest";
    }
    else{
      cout << c <<" is the greatest";

    }
  }
  

  return 0;
}