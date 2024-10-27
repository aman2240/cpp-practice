#include<iostream>
using namespace std;
void swap(int* x,int* y){
  int t;
  t=*x;
  *x=*y;
  *y=t;
}
int main(){
  int x=34;
  int y=44;
  cout << "before swapping :"<<endl;
  cout << x<<" "<<y<<endl;
  swap(&x,&y);
  cout << "after swapping"<<endl;
  cout << x <<"  "<<y<<endl;



}