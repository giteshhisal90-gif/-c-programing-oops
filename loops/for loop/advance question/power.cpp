#include <iostream>
using namespace std;

int main () {

  int num;
  cout << "Enter a number : ";
  cin >> num;

  int power;
  cout << "Enter a power : ";
  cin >> power;

  for (int i = 2 ; i <= power ; i++ ){
      num = num * num ;
        
  }
  cout << num ;

}