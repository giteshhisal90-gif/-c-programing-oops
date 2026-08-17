#include<iostream>
using namespace std;

int main(){
  long long  num,ans=0,mul=1,reme;
  cout << "enter a number : \n";
  cin >> num;


  while (num>0)
  {
    reme = num % 2 ;
    num = num/2;
    ans = reme * mul + ans;
    mul *= 10;
  }
  cout <<"binary form is :\n " << ans;
}