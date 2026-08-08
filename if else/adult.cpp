#include <iostream>
using namespace std;
int main(){
  int age ;
  cout <<"Enter your age : ";
  cin >> age;

  if(age >= 50){
    cout << "you are old";
  }
  else if(age <50 && age >= 18){
    cout << "you are adult";
  }
  else if(age <18 && age >= 13){
    cout << "you are teanager";
  }
  else if (age <13 && age >= 3){
    cout << "you are child";
  }
  else{
    cout << "you are baby";
  }
}