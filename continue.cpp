#include<iostream>
using namespace std;
// int main(){
//   for( int i=1;i<=30;i++){
//     if(i==4 || i==29) continue;
//     cout << i<< " ";
//   }
// }
int main(){
  for( int i=1;i<=100;i++){
    if(i%2==0) continue;
    cout << i<< " ";
  }
}