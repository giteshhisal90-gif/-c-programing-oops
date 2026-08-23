#include<iostream>
using namespace std;

int main(){
  char ch;
  cout << "Enter a character : ";
  cin >> ch;

  if(ch >= 'a' && ch <= 'z'){
    ch = ch - 32;
  }
  else if(ch >= 'A' && ch<='Z'){
    ch = ch + 32;
  }
  else{
    cout << "not valid character";
    return 0;
  }
  cout << ch; 
  return 0;
}