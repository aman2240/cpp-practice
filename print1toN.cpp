#include<iostream>
using namespace std;
// void print(int x,int n){
//   if(x>n) return;
//   else cout << x<<" ";
//   return print(x+1,n);
// }
// int main(){
//   int n;
//   cout << "enter n : ";
//   cin >> n;
//   print(1,n);


// // }
// void print(int n){
//   if(n==0) return;            //base case    1
//   else cout << n<<" ";        //work         2
//   return print(n-1);          //call         3
// }
// int main(){
//   int n;
//   cout << "enter n : ";
//   cin >> n;
//   print(n);


// }


//for reversing any output


void print(int n){
  if(n==0) return;            //base case    1
  print(n-1);                //call         2
  cout << n<<" ";           //work         3
}
int main(){
  int n;
  cout << "enter n : ";
  cin >> n;
  print(n);


}