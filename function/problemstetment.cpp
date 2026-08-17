/*cheack the number a and b is prime or not and print the factorial of each respectively and cheack
b-a is prime or not and print the factorial of it too*/

#include<iostream>
using namespace std;

bool prime(int n){
  if(n<2) return 0;
  else{
    for(int i = 2;i<n ; i++){
      if(n%i == 0){
        return 0;
      }
    }
    return 1;
  }
}

int fact(int n){
  if(n<0){
    return 0;
  }
  else{
  int fact = 1;
  for(int i=1;i<=n;i++){
    fact *= i;
  }
  return fact;
}
}


int main(){
  int a,b;
  cout << "Enter a two number : ";
  cin >> a >> b;
  

  cout << endl;
  cout << "-------Prime or not -----\n\n";
  if(prime(a)){
    cout << a << " is a prime\n";
  }
  else{
    cout << a <<" is not prime\n";
  }

  if(prime(b)){
    cout << b << " is a prime\n";
  }
  else{
    cout << b <<" is not prime\n";
  }

  if(prime(b-a)){
    cout << b-a<< " is a prime\n";
  }
  else{
    cout << b-a <<" is not prime\n";
  }

  cout << endl << endl;
  cout << "-----Factorial-----\n\n";

  cout << "Factorial of  " << a << ": " << fact(a) << endl ;
  cout << "Factorial of  " << b << ": " << fact(b) << endl ;
  cout << "Factorial of  " << b-a << ": " << fact(b-a) << endl ;
  

}