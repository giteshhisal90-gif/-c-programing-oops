#include <iostream>
using namespace std;

int main(){
  cout << "Enter a number of rows : ";
  int n ;
  cin >> n;

  for(int i =1;i<=n;i++){
    char a = 65;
    for(int j=1;j<=i;j++){
      cout << a << " ";
      a++;
    }
    cout << endl;
  }
}