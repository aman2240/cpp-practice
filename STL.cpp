//Standard template library
#include<iostream>
using namespace std;
int main(){
  string s="raghav";
  // cout << s<<endl;
  // s.push_back('a');
  // cout << s<<endl;
  // s.pop_back();
  // cout << s<<endl;

  // s.append(" garg");
  cout << s<<" "<<s.length()<<endl;
  // s.clear();
  // cout << s<<" "<<s.length()<<endl;
  reverse(s.begin(),s.end());
  cout << s<<" "<<s.length()<<endl;
}