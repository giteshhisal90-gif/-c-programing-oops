#include<iostream>
using namespace std;

int main(){
  int x =45;
  int *p =&x;

  // both are same
  cout << &x << endl;
  cout << p << endl;

  // value
  cout << *p ;
}