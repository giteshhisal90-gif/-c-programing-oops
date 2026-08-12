#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter a number of rows : ";
  cin >> n;

  int i,j;
  char k;
  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
      cout << "  ";
    }
    for(k='A';k<='A'+i-1;k++){
      cout << k << " ";
    }
    cout <<endl;
  }
}