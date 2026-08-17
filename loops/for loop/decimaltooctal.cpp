#include<iostream>
using namespace std;

int main(){
  int num,rem,ans=0,mul=1;
  cout << "Enter a decimal no : \n";
  cin >> num;

  while (num>0)
  {
    rem = num % 8;
    num /= 8;
    ans = rem * mul + ans;
    mul *= 10;
  }
  cout << "Octal form is :\n";
  cout << ans;
}