#include<iostream>
using namespace std;
void print(int n){
  if(n==0) return;
  else cout << n<<" ";
  return print(n-1);
}
int main(){
  int n;
  cout << "enter n : ";
  cin >> n;
  print(n);


}