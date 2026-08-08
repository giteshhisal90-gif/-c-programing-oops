#include <iostream>
using namespace std;

int main(){
  cout << "Enetr a term : ";
  int n;
  cin >> n;

  int a =0 ,b =1 , c ;
  cout << a << " " << b << " ";
  for(int i =1 ;i <=n ; i++){
    c = a+b;
    cout << c << " ";
    a = b;
    b = c;
  }
return 0 ;

}