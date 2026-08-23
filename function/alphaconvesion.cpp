#include<iostream>
using namespace std;

char convert(char ch){
  if(ch>='a' && ch <= 'z'){
    ch = ch - 'a' + 'A';
  }
  else if(ch>='A' && ch<='Z'){
    ch = ch - 'A' + 'a';
  }
  else{
    cout << "invalid character";
    return 0;
  }

  return ch;
}
int main(){
  char ch ;
  cout << "Enter a charecter : ";
  cin >> ch;

  cout << convert(ch);
}