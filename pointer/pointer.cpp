#include<iostream>
using namespace std;

int main(){
  int x = 12;
  int *ptr = &x;

  cout << x << endl;
  *ptr = 33;
  cout << x <<endl;
}