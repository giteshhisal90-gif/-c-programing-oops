#include<iostream>
using namespace std;
void display(int n){
  if(n==0){
    return;
  }
  display(n-1);
  cout << n << endl;
  // display(n-1);

  return;
}
int main(){
  int n;
  cout << "Enter a number : ";
  cin >> n;

  display(n);
}