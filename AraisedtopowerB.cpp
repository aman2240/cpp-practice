#include<iostream>
using namespace std;
int pow(int a,int b){
  if(a==1 || b==0) return 1;
  else if(a==0) return 0;
  else return a*pow(a,b-1);

}
int main(){
  int a,b;
  cout << "enter a and b: ";
  cin >>a;
  cin >> b;
  cout << pow(a,b);


}