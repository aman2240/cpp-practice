#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "enter the number";
  cin >> n;
  if((n%5==0 || n%3==0) and n%5!=0){
    cout <<n<< "is divisble by 5 or 3 but ot divisble by 15";
  }
  else{
    cout <<n<< "is not divisble by 5 or 3 but ot divisble by 15";
  }

  return 0;
}