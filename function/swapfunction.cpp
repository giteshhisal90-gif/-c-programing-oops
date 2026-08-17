#include<iostream>
using namespace std;

void swap(int& a,int& b){
     a = a+b;
     b = a - b;
     a = a - b;


}
int main(){
  int a,b;
  cout << "Enter a two number num1 and num2 : \n";
  cin >> a >> b;

  cout << "Before the swap : \n";
  cout << "Number 1 : " << a;
  cout << "\nNumber 1 : " << b;

  cout << "\n\nAfter swaping : \n";
  swap(a,b);

  cout << "Number 1 : " << a;
  cout << "\nNumber 1 : " << b;
 

}