#include<iostream>
using namespace std;

void display(int a,int n){
  if(a>n) return;
  cout << a << endl;
  display(a+1,n);
}
int main(){
  int n;
  cout << "enter a term : ";
  cin >> n;

  display(1,n);
  return 0;
}