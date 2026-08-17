#include<iostream>
using namespace std;


void greet(){
  cout << "Hello mr.Gitesh";
  cout<<endl<<"How are you ? "<<endl;
  return;
}
int main(){
  cout << "befor call function\n";
  greet();
  cout << "After call function";
}