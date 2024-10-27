#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "enter percentage of the student : ";
  cin >> n;
  if(n>80 and n<=100){
    cout << "very good";
  }
  else if(n>60 and n<=80){
    cout << "good";
  }
  else if(n>40 and n<=60){
    cout << "average";

  }
  else{
    cout << "fail";
  }
  return 0;
}