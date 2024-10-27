// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout << "enter no. of terms of gp - ";
//   cin >> n;
//   int a = 1;
  
//   for(int i=1;i<=n;i++){
//     cout << a<<" ";
//     a=a*2;
    
    
//   }


//   return 0;
// }
#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "enter no. of terms of gp - ";
  cin >> n;
  int a=3;
  
  for(int i=1;i<=n;i++){
    cout << a<<" ";
    a*=4;
    
    
    
  }


  return 0;
}