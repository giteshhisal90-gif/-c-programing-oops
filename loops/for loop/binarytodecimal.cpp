#include<iostream>
using namespace std;

int main(){
   long long num,rem,ans =0 ,mul = 1;
   cout << "Enter a Binary number : \n";
   cin>>num;

   while (num>0)
   {
    rem = num%10;
    num = num/10;
    ans = rem * mul + ans;
    mul *= 2;
   }

   cout << "Decimal number is : \n";
   cout << ans;
   
}