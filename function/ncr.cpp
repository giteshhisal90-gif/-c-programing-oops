#include<iostream>
using namespace std;
int fact(int a){
  int fact = 1;
  for(int i=1;i<=a;i++){
    fact *= i;
  }
  return fact;
}
float ncr(int n , int r){
  int a,b,c;
    a=fact(n);
    b= fact(r);
    c= fact(n-r);

    return a/(b*c);
}
int main(){
  cout << ncr(6,4);
}