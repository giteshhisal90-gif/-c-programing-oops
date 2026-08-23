#include<iostream>
#include<math.h>
using namespace std;

int count_digit(int n){
  int count = 0;
  while (n!=0)
  {
    count ++;
    n /=  10;
  }

  return count;
  
}

bool isangstrom(int n , int count){
    int ans = 0,rem,num = n;
    while(n!=0){
      rem = n%10;
      n /= 10;
      ans = ans + pow(rem , count);
    }
    if(ans == num){
      return 1;
    }
    else{
      return 0;
    }

}

int main(){
  int n;
  cout << "Enter a number : ";
  cin >> n;

  int digit = count_digit(n);
  bool angstrom = isangstrom(n,digit);
  if(angstrom){
    cout << n << " is a angstrom number";
  }
  else{
    cout << n << " is not a angstrom";
  }

}