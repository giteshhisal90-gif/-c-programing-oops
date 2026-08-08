#include <iostream>
using namespace std;  

int main(){
  int num;
  cout << "Enter a number: ";
  cin >> num;

  if((num % 5 == 0 or num % 3 == 0) && (num % 15 != 0) ){
    cout << "The number is divisible by 3 or 5 but not both." << endl;
  }
  else if((num % 5 == 0 or num % 3 == 0) && (num % 15 == 0)){
    cout << "The number is divisible by both 3 and 5." << endl;
  }
  else{
    cout << "The number is either not divisible by 3 or 5." << endl;
  }
}