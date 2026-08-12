#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter a row no. : ";
  cin >> n;

  int i,j,k;
  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
      cout << "  ";
    }
    for(k=i;k>=1;k--){
      cout << k << " ";
    
    }
    cout << endl;
  }
}