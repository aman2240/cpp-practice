#include<iostream>
using namespace std;
void change(int b[]){
  b[0]=55;
}
int main(){
  int arr[]={5,7,9,1,11};
  for(int i=0;i<=4;i++){
    cout << arr[i]<<" ";
  }
  cout << endl;
  change(arr);
  for(int i=0;i<=4;i++){
    cout << arr[i]<<" ";
  }

}