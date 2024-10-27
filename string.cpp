#include<iostream>
using namespace std;
int main(){
  string str;
  //cin >> str;
  getline(cin,str);
  int n=str.length();
  int count=0;
  for(int i=0;i<n;i++){
    if(str[i]=='a' or str[i]=='u' or str[i]=='o' or str[i]=='i' or str[i]=='e')
    count++;
  }
  cout << count;
}