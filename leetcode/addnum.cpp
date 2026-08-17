#include<iostream>
using namespace std;

int main(){
  int num,ans =0,rem;
  cout << "Enter a number : ";
  cin >> num;

  while (num != 0 )
  {
    rem = num % 10;
    num /= 10;
    ans += rem;
  }

  cout << "the sum of numbers is : \n " << ans ;
  
}